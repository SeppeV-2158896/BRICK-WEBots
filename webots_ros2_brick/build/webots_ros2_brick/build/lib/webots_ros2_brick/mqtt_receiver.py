

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
# from webots_ros2_core.webots_node import WebotsNode




class mqtt_receiver(Node):
    def __init__(self):
        pass
    def publish_cmd_vel(self):
        pass






def main(args=None):
    rclpy.init(args=args)
    client_vel = mqtt_receiver()
    rclpy.spin(client_vel)

    client_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()