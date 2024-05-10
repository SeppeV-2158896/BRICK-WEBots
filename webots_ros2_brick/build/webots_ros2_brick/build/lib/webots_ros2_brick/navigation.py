import rclpy
from rclpy.node import Node
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from geometry_msgs.msg import PoseStamped, Twist
from rclpy.duration import Duration
from nav_msgs.msg import Odometry, Path
import math
from tf_transformations import euler_from_quaternion, quaternion_from_euler

class PIDController:
    def __init__(self, p_gain, i_gain, d_gain, delta_t):
        
        # Params
        self.p_gain = p_gain
        self.i_gain = i_gain
        self.d_gain = d_gain
        self.delta_t = delta_t
        
        # Errors
        self.error = 0.0
        self.integral_error = 0.0
        
        # Values
        self.goal_value = None
        self.current_value = None
        self.previous_value = None
    
    def calculate_error(self):
        return self.goal_value - self.current_value
        
    def set_current_value(self, current_value):
        self.current_value = current_value
    
    def set_goal(self, goal_value, current_value):
        self.goal_value = goal_value
        self.current_value = current_value
        if self.previous_value is None:
            self.previous_value = current_value
        self.integral_error = 0.0
        
    def get_command(self):
        self.error = self.calculate_error()
        output = self.p_gain * self.error
        self.integral_error += self.error * self.delta_t
        output += self.i_gain * self.integral_error
        output += self.d_gain * (self.previous_value - self.current_value)
        self.previous_value = self.current_value
        return output 
    



class navigation(Node):
    def __init__(self):
        super().__init__('navigator')
        self.get_logger().info("navigator started!")
        self.timeStep = 32
        self.path = None
        self.path_queue = []
        self.position_pid = PIDController(1, 0.01, 0.01, self.timeStep/1000.0)
        self.orientation_pid = PIDController(1, 0.01, 1, self.timeStep/1000.0)

        self.path_sub = self.create_subscription(Path, '/plan', self.path_callback, 1)
        self.odom_sub = self.create_subscription(Odometry, '/odom', self.odom_callback, 1)
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
    def path_callback(self, path_msg):
        
        if self.path_queue == []:
            self.get_logger().info("path")
            self.path = path_msg.poses
            self.path_queue = [(pose.pose.position.x, pose.pose.position.y) for pose in self.path]
            if len(self.path_queue) > 10:
                self.path_queue = self.path_queue[10:]

            self.get_logger().info(str(len(self.path_queue)))

    def odom_callback(self, odom_msg):
        if self.path is None or len(self.path_queue) == 0:
            return
        self.move_to_goal(odom_msg)

    def calculate_position_error(self, goal_position, current_position):
        return math.sqrt((goal_position[0] - current_position[0])**2 +
            (goal_position[1] - current_position[1])**2)
    
    def move_to_goal(self,odom):
        self.get_logger().info("odomx: " + str(odom.pose.pose.position.x) + "  y: " + str(odom.pose.pose.position.y))
        if(len(self.path_queue) > 0):
            robot_position = odom.pose.pose.position
            position = (robot_position.x,robot_position.y)
            robot_orientation = odom.pose.pose.orientation
            orientation = robot_orientation.z
            self.goal_position = self.path_queue[0]
            roll,pitch,yaw = euler_from_quaternion((robot_orientation.x,robot_orientation.y,robot_orientation.z,robot_orientation.w))
            
            if abs(self.calculate_position_error(self.path_queue[-1],position)) < 0.2:
                self.path_queue = []
                self.get_logger().info("goal reached!")
                cmd_vel_msg = Twist()
                cmd_vel_msg.linear.x = float(0) # Linear velocity
                cmd_vel_msg.angular.z = -float(0)  # Angular velocity, adjust as needed
                self.cmd_vel_pub.publish(cmd_vel_msg)
                return


            self.get_logger().info("goal pos: " + str(self.goal_position) + "  pos: " + str(position))
            self.position_pid.set_goal(0, self.calculate_position_error(self.goal_position, position))
            self.position_pid.set_current_value(self.calculate_position_error(self.goal_position, position))
            position_command = self.position_pid.get_command()
            
            y_diff = self.goal_position[1] - position[1]
            x_diff = self.goal_position[0] - position[0] 
            yaw = yaw
            goal_orientation = math.atan2(y_diff, x_diff)
            if abs(goal_orientation - yaw) > 22/7:
                if goal_orientation > yaw:
                    goal_orientation -= 2 * math.pi
                else:
                    goal_orientation += 2 * math.pi


            self.get_logger().info("yaw: " + str(yaw) + " goal or: " + str(goal_orientation))

            #self.get_logger().info(str(orientation))
            self.orientation_pid.set_goal(goal_orientation, yaw)
            self.orientation_pid.set_current_value(yaw)
            orientation_command = self.orientation_pid.get_command()
            self.get_logger().info("or command: " + str(orientation_command) + "  pos command: " + str(position_command))
            linvel = 0.0
            angularvel = orientation_command  
            angularvel = (angularvel*(22/7))/180
            if abs(position_command) > 0.05:
                linvel += 0.2
            
            self.get_logger().info(str(self.position_pid.error) + "   " + str(self.orientation_pid.error)) 
            if math.fabs(self.position_pid.error) < 0.15:# and math.fabs(position_pid.error[1]) < 0.01:
                self.get_logger().info("Here!")
                position_goal_set = False
                if(len(self.path_queue) > 0):
                    self.path_queue.pop(0)


            if math.fabs(self.orientation_pid.error) > 1:# and math.fabs(position_pid.error[1]) < 0.01:
                #self.get_logger().info("Oh no, we re wanderin!")
                position_goal_set = False
                linvel = 0.0



            self.get_logger().info("linvel: " + str(linvel) + "  angularvel: " + str(angularvel))

            cmd_vel_msg = Twist()
            cmd_vel_msg.linear.x = float(linvel) # Linear velocity
            cmd_vel_msg.angular.z = -float(angularvel) # Angular velocity, adjust as needed
            self.cmd_vel_pub.publish(cmd_vel_msg)


def main(args=None):
    rclpy.init(args=args)
    client_vel = navigation()
    rclpy.spin(client_vel)

    client_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()