import rclpy
from enum import Enum
from math import cos, sin , tan , pi
from std_msgs.msg import Float64
from rclpy.time import Time
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import TransformStamped
from tf2_ros import StaticTransformBroadcaster,TransformBroadcaster 
from tf_transformations import euler_from_quaternion, quaternion_from_euler
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3, PoseStamped
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult




HALF_DISTANCE_BETWEEN_WHEELS = 0.045
WHEEL_RADIUS = 0.025
TIME_STEP = 32

class MyRobotDriver():
    def init(self, webots_node, properties):
        rclpy.init(args=None)
        self.node = rclpy.create_node('Brick_driver')
        

        self.robot = webots_node.robot
        self.service_node_vel_timestep = 32

        

        self.camera =self.robot.getDevice("Webcam")
        self.camera.enable(self.service_node_vel_timestep)
        
        # Front wheels
        self.left_motor = self.robot.getDevice('left_motor')
        self.left_motor.setPosition(float('inf'))
        self.left_motor.setVelocity(0)

        self.right_motor= self.robot.getDevice('right_motor')
        self.right_motor.setPosition(float('inf'))
        self.right_motor.setVelocity(0)
        
        # position sensors 
        self.left_wheel_sensor = self.robot.getDevice('pos_left')
        self.right_wheel_sensor = self.robot.getDevice('pos_right')
        self.left_wheel_sensor.enable(self.service_node_vel_timestep)
        self.right_wheel_sensor.enable(self.service_node_vel_timestep)
        self.motor_max_speed = self.left_motor.getMaxVelocity()

        # Create Subscriber
        self.cmd_vel_subscriber = self.node.create_subscription(
            Twist, '/cmd_vel', self.cmdVel_callback, 1)
        self.goal_subscriber = self.node.create_subscription(
            Vector3, '/goal', self.goal_callback,1)
        
        # Create Lidar subscriber
        self.lidar_sensor = self.robot.getDevice('lidar')
        self.lidar_sensor.enable(self.service_node_vel_timestep)
        self.lidar_sensor.enablePointCloud()
        


        

        ##########################
        self.x = 0.0
        self.y = 0.0
        self.th = 0.0
        self.vx = 0.0
        self.vy = 0.0
        self.vth = 0.0
        self.time_step= 0.04#0.032
        self.left_omega = 0.0
        self.right_omega = 0.0
        self.left_target_v = 0
        self.right_target_V = 0
        
        #########################
        
        self.prev_angle = (22/7)/2
        self.prev_left_wheel_ticks = 0.0
        self.prev_right_wheel_ticks = 0.0
        self.last_time = 0.0
        self.wheel_gap = 0.4 # in meter
        self.wheel_radius = 0.075  # in meter

        self.odom_pub = self.node.create_publisher(Odometry,"odom",1)
        self.odom_timer = self.node.create_timer(self.time_step, self.odom_callback)

        self.laser_publisher = self.node.create_publisher(LaserScan, '/scan', 1)
        self.laserTimer = self.node.create_timer(self.time_step,self.laser_pub)

    def odom_callback(self):
        self.publish_odom()

    def publish_odom(self):
        ####DC = (Dl + Dr)/2
        ####x' = x + Dc*cos(th)
        ####y' = y + Dc*sin(th)
        ####th' = th + (Dr-Dl)/L
        stamp = Time(seconds=self.robot.getTime()).to_msg()

        self.odom_broadcaster = TransformBroadcaster(self.node)
        time_diff_s = self.robot.getTime() - self.last_time
        # time_diff_s = self.time_step
        
        left_wheel_ticks = self.left_wheel_sensor.getValue()
        right_wheel_ticks = self.right_wheel_sensor.getValue()
        #self.node.get_logger().info("ticks " + str(left_wheel_ticks) + " " + str(right_wheel_ticks))
        if time_diff_s == 0.0:
            return

        # Calculate velocities
        v_left = (left_wheel_ticks - self.prev_left_wheel_ticks) / time_diff_s
        v_right = (right_wheel_ticks - self.prev_right_wheel_ticks) / time_diff_s
        v = (v_left + v_right) / 2
        omega = (v_right-v_left) / self.wheel_gap


        self.x += v * sin(self.prev_angle)*time_diff_s
        self.y += v * cos(self.prev_angle)*time_diff_s
        self.th += omega*time_diff_s



        ################################################################

        # Reset section
        self.prev_angle = self.th
        self.prev_left_wheel_ticks = left_wheel_ticks
        self.prev_right_wheel_ticks = right_wheel_ticks
        self.last_time = self.robot.getTime()

        # since all odometry is 6DOF we'll need a quaternion created from yaw
        odomq=quaternion_from_euler(0.0, 0.0, self.th)

        # first, we'll publish the transform over tf
        odom_transform = TransformStamped()
        odom_transform.header.stamp = stamp
        odom_transform.header.frame_id = 'odom'
        odom_transform.child_frame_id = 'base_link'
        #self.node.get_logger().info(str(stamp))
        odom_transform.transform.rotation.x = odomq[0]
        odom_transform.transform.rotation.y = odomq[1]
        odom_transform.transform.rotation.z = odomq[2]
        odom_transform.transform.rotation.w = odomq[3]
        odom_transform.transform.translation.x = -self.x
        odom_transform.transform.translation.y = self.y
        odom_transform.transform.translation.z = 0.0
        #self.node.get_logger().info(str(odom_quat) + " en dan ook nog " + str(odom_transform))
        self.odom_broadcaster.sendTransform(odom_transform)
        
        odom = Odometry()
        odom.header.stamp = stamp
        odom.header.frame_id = "odom"
        odom.child_frame_id = "base_link"
        # set the position
        odom.pose.pose.position.x= 0.0
        odom.pose.pose.position.y= 0.0
        odom.pose.pose.orientation.x=0.0
        odom.pose.pose.orientation.y=0.0
        odom.pose.pose.orientation.z=0.0
        odom.pose.pose.orientation.w= 0.0
        # set the velocity
        odom.twist.twist.linear.x = 0.0
        odom.twist.twist.angular.z= 0.0

        # publish the message
        self.odom_pub.publish(odom)
    
    def goal_callback(self,msg):
        x = msg.translation.x
        y = msg.translatyion.y
        goal_pose = (x,y)
        path = self.nav.getPath((self.x,self.y), goal_pose)
        smoothed_path = self.nav.smoothPath(path)
        self.nav.goToPose(goal_pose)
        while not self.nav.isTaskComplete():
            feedback = self.nav.getFeedback()
            if feedback.navigation_duration > 600:
                self.nav.cancelTask()

        result = self.nav.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')


    def cmdVel_callback(self, msg):
        self.vx = msg.linear.x
        self.vth = msg.angular.z
        
        
        #self.node.get_logger().info("initvelocity" + " " + str(msg.linear) + " " + str(msg.angular))
        left_speed = msg.linear.x + (2* msg.angular.z)/self.wheel_gap
        right_speed = msg.linear.x - (2* msg.angular.z)/self.wheel_gap
        left_speed = min(self.motor_max_speed,
                         max(-self.motor_max_speed, left_speed))
        right_speed = min(self.motor_max_speed,
                          max(-self.motor_max_speed, right_speed))


        self.left_motor.setVelocity(left_speed)
        self.right_motor.setVelocity(right_speed)

    def laser_pub(self):
        try:
            msg_lidar = LaserScan()
            msg_lidar.header.frame_id = 'base_link'
            stamp = Time(seconds=self.robot.getTime()).to_msg()
            #self.node.get_logger().info(str(stamp))
            msg_lidar.header.stamp = stamp
            msg_lidar.angle_min = 0.0
            msg_lidar.angle_max = 22 / 7
            msg_lidar.angle_increment = ( 22 / 7  ) / (179)
            msg_lidar.range_min = 0.12
            msg_lidar.range_max = 25.0
            msg_lidar.scan_time = 0.032
            msg_lidar.ranges = self.lidar_sensor.getRangeImage()
            #self.node.get_logger().info("ranges = " + str(msg_lidar.ranges))
            self.laser_publisher.publish(msg_lidar)
        except Exception as e:
            pass

        
    def step(self):
        image = self.camera.getImage()
        #self.laser_pub()
        rclpy.spin_once(self.node, timeout_sec=0.001)
        