

import rclpy
from rclpy.node import Node
# from webots_ros2_core.webots_node import WebotsNode




class mqtt_receiver(Node):
    def __init__(self):
        pass





def main(args=None):
    print("kewl")
    rclpy.init(args=args)
    client_vel = mqtt_receiver()
    rclpy.spin(client_vel)

    client_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()