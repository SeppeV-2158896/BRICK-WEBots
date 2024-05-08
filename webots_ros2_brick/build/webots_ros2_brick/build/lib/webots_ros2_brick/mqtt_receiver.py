import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64
# from webots_ros2_core.webots_node import WebotsNode
import paho.mqtt.client as mqtt

class mqtt_receiver(Node):
    def __init__(self):
        super().__init__('mqtt_receiver_node')

        self.moveBindings = {
            'i':(1,0,0,0),
            'o':(1,0,0,-1),
            'j':(0,0,0,1),
            'l':(0,0,0,-1),
            'u':(1,0,0,1)
        }

        broker_address = "2a144db8513740369fedfc9de40e179b.s1.eu.hivemq.cloud"
        port = 8883
        username = "BRICK"
        password = "FristiBRICK03"

        # MQTT client setup
        self.client = mqtt.Client(callback_api_version=mqtt.CallbackAPIVersion.VERSION2)
        self.client.tls_set(tls_version=mqtt.ssl.PROTOCOL_TLS)
        self.client.username_pw_set(username, password)

        self.client.on_connect = self.on_connect
        self.client.on_message = self.on_message
        self.client.on_connect_fail = self.on_connect_fail

        # Connect to MQTT broker
        self.client.connect(broker_address, port=port, clean_start=mqtt.MQTT_CLEAN_START_FIRST_ONLY, keepalive=60)
        self.get_logger().info("Connecting to broker...")

        # Start the MQTT loop
        self.get_logger().info("MQTT loop started...")
        self.client.loop_start()

    def on_connect(self, client, userdata, flags, rc, properties):
        self.get_logger().info("on_connect is called")
        self.get_logger().info("Connected to MQTT broker")

        self.client.subscribe("movement")
        self.client.subscribe("emergencyStop")

        self.get_logger().info("Subscribed to topics: movement, emergencyStop")

    def on_connect_fail(self, client, userdata, rc):
        self.get_logger().info("Failed to connect to MQTT broker")

    def on_message(self, client, userdata, msg):
        self.get_logger().info("Received message")

    def __del__(self):
        self.get_logger().info("stopping mqtt")
        self.client.loop_stop()
        self.client.disconnect()

def main(args=None):
    rclpy.init(args=args)
    #node = rclpy.create_node('mqtt_receiver_node')

    mqtt_client = mqtt_receiver()

    rclpy.spin(mqtt_client)

    mqtt_client.destroy_node()
    rclpy.shutdown()

    


if __name__ == '__main__':
    main()