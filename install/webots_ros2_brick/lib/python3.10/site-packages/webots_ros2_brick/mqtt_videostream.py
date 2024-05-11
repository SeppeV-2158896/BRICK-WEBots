import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import paho.mqtt.client as mqtt
import io
import base64
from cv_bridge import CvBridge
import cv2

class mqtt_videostream(Node):
    def __init__(self):
        super().__init__('mqtt_videostream_node')

        self.camera_subscriber = self.create_subscription(
            Image, '/BRICKV1/Webcam/image_color', self.camera_callback, 1)

        broker_address = "7cb49eb0a30146faa5a52c7adaaf47b7.s1.eu.hivemq.cloud"
        port = 8883
        username = "BRICK"
        password = "FristiBRICK03"

        # MQTT client setup
        self.client = mqtt.Client(callback_api_version=mqtt.CallbackAPIVersion.VERSION2)
        self.client.tls_set(tls_version=mqtt.ssl.PROTOCOL_TLS)
        self.client.username_pw_set(username, password)

        self.client.on_connect = self.on_connect
        self.client.on_connect_fail = self.on_connect_fail

        # Connect to MQTT broker
        self.client.connect(broker_address, port=port, clean_start=mqtt.MQTT_CLEAN_START_FIRST_ONLY, keepalive=60)
        self.get_logger().info("Connecting to broker...")

        # Start the MQTT loop
        self.get_logger().info("MQTT loop started...")
        self.client.loop_start()

    def on_connect(self, client, userdata, flags, rc, properties):
        self.get_logger().info("Connected to MQTT broker")

        self.client.subscribe("videostream")

        self.get_logger().info("Subscribed to topics: videostream")

    def on_connect_fail(self, client, userdata, rc):
        self.get_logger().info("Failed to connect to MQTT broker")
    
    def camera_callback(self, image):
        bridge = CvBridge()
        image_cv = bridge.imgmsg_to_cv2(image, desired_encoding='bgr8')

        _, buffer = cv2.imencode('.jpg', image_cv)
        image_base64 = base64.b64encode(buffer)
        
        self.client.publish("videostream", image_base64)
        #self.get_logger().info("Image send")

    def __del__(self):
        self.get_logger().info("stopping mqtt")
        self.client.loop_stop()
        self.client.disconnect()

def main(args=None):
    rclpy.init(args=args)
    #node = rclpy.create_node('mqtt_receiver_node')

    mqtt_client = mqtt_videostream()

    rclpy.spin(mqtt_client)

    mqtt_client.destroy_node()
    rclpy.shutdown()

    


if __name__ == '__main__':
    main()