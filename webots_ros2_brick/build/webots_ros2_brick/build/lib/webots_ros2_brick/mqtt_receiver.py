

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
import paho.mqtt.client as mqtt
# from webots_ros2_core.webots_node import WebotsNode




class mqtt_receiver(Node):
    def __init__(self):
        super().__init__('mqtt_handler')
        self.get_logger().info("init client")
        self.client = mqtt.Client() 
        self.client.on_connect = self.on_connect
        self.client.on_message = self.on_message
        self.client.connect("2a144db8513740369fedfc9de40e179b.s1.eu.hivemq.cloud", 8884, 60)
        self.client.loop_start()
        

    def on_connect(self, client, userdata, flags, rc):
        self.get_logger().info("Connected with result code "+str(rc))

    def on_message(self, client, userdata, message):
        self.get_logger().info("Received message: "+str(message.payload.decode()))




    def publish_cmd_vel(self):
        pass






def main(args=None):
    rclpy.init(args=args)
    try:
        relay_ros2_mqtt = mqtt_receiver()
        rclpy.spin(relay_ros2_mqtt)
    except rclpy.exceptions.ROSInterruptException:
        pass

    relay_ros2_mqtt .destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()