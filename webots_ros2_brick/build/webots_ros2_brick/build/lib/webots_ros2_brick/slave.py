# Copyright 1996-2020 Soft_illusion.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
#from webots_ros2_core.webots_node import WebotsNode
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
from geometry_msgs.msg import Point, Pose, Quaternion, Twist, Vector3
#from webots_ros2_core.math_utils import euler_to_quaternion

DEFAULT_WHEEL_RADIUS = 0.1
DEFAULT_WHEEL_DISTANCE = 0.1

class ServiceNodeVelocity(Node):
    def __init__(self, args):
        super().__init__('slave_node')

        self.service_node_vel_timestep = 32
        
        # Sensor section
        self.sensor_timer = self.create_timer(
            0.001 * self.service_node_vel_timestep, self.laser_pub)
        
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
        self.left_wheel_sensor.enable(self.timestep)
        self.right_wheel_sensor.enable(self.timestep)
        self.motor_max_speed = self.left_motor_rear.getMaxVelocity()

        # Create Subscriber
        self.cmd_vel_subscriber = self.create_subscription(
            Twist, 'cmd_vel', self.cmdVel_callback, 1)

        # Create Lidar subscriber
        self.lidar_sensor = self.robot.getDevice('lidar')
        self.lidar_sensor.enable(self.service_node_vel_timestep)
        self.laser_publisher = self.create_publisher(LaserScan, '/scan', 1)
        self.sensor_timer = self.create_timer(
            0.001 * self.service_node_vel_timestep, self.laser_pub)

        ##########################
        self.x = 0.0
        self.y = 0.0
        self.th = 0.0
        self.vx = 0.0
        self.vy = 0.0
        self.vth = 0.0
        self.time_step=0.032
        self.left_omega = 0.0
        self.right_omega = 0.0
        self.odom_pub = self.create_publisher(Odometry,"odom",1)
        self.odom_timer = self.create_timer(self.time_step, self.odom_callback)
        #########################
        self.get_logger().info('Sensor enabled')
        self.prev_angle = 0.0
        self.prev_left_wheel_ticks = 0.0
        self.prev_right_wheel_ticks = 0.0
        self.last_time = 0.0
        self.wheel_gap = 0.4 # in meter
        self.wheel_radius = 0.075  # in meter

    ####################################
    def odom_callback(self):
        self.publish_odom()

    def publish_odom(self):
        stamp = Time(seconds=self.robot.getTime()).to_msg()

        self.odom_broadcaster = TransformBroadcaster(self)
        time_diff_s = self.robot.getTime() - self.last_time
        # time_diff_s = self.time_step

        left_wheel_ticks = self.left_wheel_sensor.getValue()
        right_wheel_ticks = self.right_wheel_sensor.getValue()

        if time_diff_s == 0.0:
            return

        # Calculate velocities
        v_left_rad = (left_wheel_ticks - self.prev_left_wheel_ticks) / time_diff_s
        v_right_rad = (right_wheel_ticks - self.prev_right_wheel_ticks) / time_diff_s
        v_left = v_left_rad * self.wheel_radius
        v_right = v_right_rad * self.wheel_radius
        v = (v_left + v_right) / 2
        omega = (v_right - v_left) / 2 * 2 * self.wheel_gap # (Vright - Vleft) / 2* wheel_gap


        # ################################################################
        # angle_v = self.th+omega
        # vx=v*cos(omega)
        # vy=v*sin(omega)
        # # self.get_logger().info('th = %f , v = %f , omega = %f' % (self.th ,v , omega) )
        # dx = (cos(angle_v)*vx - sin(angle_v)*vy)*time_diff_s
        # dy = (sin(angle_v)*vx + cos(angle_v)*vy)*time_diff_s
        # dth = tan(omega)*vx*time_diff_s / self.front_back

        # self.x += dx
        # self.y += dy
        # self.th += omega


        # # Calculate position & angle
        # # Fourth order Runge - Kutta
        # # Reference: https://www.cs.cmu.edu/~16311/s07/labs/NXTLabs/Lab%203.html
        # k00 = v * cos(self.prev_angle)
        # k01 = v * sin(self.prev_angle)
        # k02 = omega
        # k10 = v * cos(self.prev_angle + time_diff_s * k02 / 2)
        # k11 = v * sin(self.prev_angle + time_diff_s * k02 / 2)
        # k12 = omega
        # k20 = v * cos(self.prev_angle + time_diff_s * k12 / 2)
        # k21 = v * sin(self.prev_angle + time_diff_s * k12 / 2)
        # k22 = omega
        # k30 = v * cos(self.prev_angle + time_diff_s * k22 / 2)
        # k31 = v * sin(self.prev_angle + time_diff_s * k22 / 2)
        # k32 = omega


        self.x += v * cos(self.prev_angle)*time_diff_s
        self.y += v * sin(self.prev_angle)*time_diff_s
        self.th += omega



        ################################################################

        # Reset section
        self.prev_angle = self.th
        self.prev_left_wheel_ticks = left_wheel_ticks
        self.prev_right_wheel_ticks = right_wheel_ticks
        self.last_time = self.robot.getTime()

        # since all odometry is 6DOF we'll need a quaternion created from yaw
        odom_quat=quaternion_from_euler(0.0, 0.0, self.th)

        # first, we'll publish the transform over tf
        odom_transform = TransformStamped()
        odom_transform.header.stamp = stamp
        odom_transform.header.frame_id = 'odom'
        odom_transform.child_frame_id = 'base_link'
        odom_transform.transform.rotation = odom_quat
        odom_transform.transform.translation.x = self.x
        odom_transform.transform.translation.y = self.y
        odom_transform.transform.translation.z = 0.0

        self.odom_broadcaster.sendTransform(odom_transform)

        odom = Odometry()
        odom.header.stamp = stamp
        odom.header.frame_id = "odom"
        odom.child_frame_id = "base_link"
        # set the position
        odom.pose.pose.position.x= self.x
        odom.pose.pose.position.y= self.y
        odom.pose.pose.orientation = odom_quat
        # set the velocity
        odom.twist.twist.linear.x = self.vx
        odom.twist.twist.angular.z=self.vth

        # publish the message
        self.odom_pub.publish(odom)


    ###################################
    ###this gets feedback from ros2 run teleop_twist_keyboard teleop_twist_keyboard --ros-args -r /cmd_vel:=/model/vehicle_blue/cmd_vel which is
    def cmdVel_callback(self, msg):
        ###TODO: this is for four wheels, we only have 2 so need to change htis
        
        self.vx = msg.linear.x
        self.vth = msg.angular.z
        left_speed = ((2.0 * msg.linear.x - msg.angular.z *
                       self.wheel_gap) / (2.0 * self.wheel_radius))
        right_speed = ((2.0 * msg.linear.x + msg.angular.z *
                        self.wheel_gap) / (2.0 * self.wheel_radius))
        left_speed = min(self.motor_max_speed,
                         max(-self.motor_max_speed, left_speed))
        right_speed = min(self.motor_max_speed,
                          max(-self.motor_max_speed, right_speed))

        self.left_omega = left_speed / (self.wheel_radius)
        self.right_omega = right_speed / (self.wheel_radius)
        self.left_motor.setVelocity(left_speed)
        self.right_motor.setVelocity(right_speed)




    def laser_pub(self):
        print("slave")
        image = self.camera.getImage()
        msg_lidar = LaserScan()
        msg_lidar.header.frame_id = 'base_link'
        stamp = Time(seconds=self.robot.getTime()).to_msg()
        msg_lidar.header.stamp = stamp
        msg_lidar.angle_min = 0.0
        msg_lidar.angle_max = 2 * 22 / 7
        msg_lidar.angle_increment = ( 0.25 * 22 ) / (180 * 7 )
        msg_lidar.range_min = 0.12
        msg_lidar.range_max = 2.0
        msg_lidar.scan_time = 0.032
        msg_lidar.ranges = self.lidar_sensor.getRangeImage()

        self.laser_publisher.publish(msg_lidar)




def main(args=None):
    rclpy.init(args=args)
    client_vel = ServiceNodeVelocity(args=args)

    rclpy.spin(client_vel)

    client_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()