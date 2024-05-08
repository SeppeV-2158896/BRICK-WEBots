import rclpy
from rclpy.node import Node
import paho.mqtt.client as mqtt

def main():
    rclpy.init(args=None)
    node = rclpy.create_node('mqtt_receiver_node')
    rclpy.spin(node)

    node.get_logger().info("main")

    # MQTT broker details
    broker_address = "2a144db8513740369fedfc9de40e179b.s1.eu.hivemq.cloud"
    port = 8883
    username = "your_username"  # replace with your MQTT username
    password = "your_password"  # replace with your MQTT password

    # Topics to subscribe to
    topics = ["movement", "emergencyStop"]

    # Callback functions
    def on_connect(client, userdata, flags, rc):
        if rc == 0:
            node.get_logger().info("Connected to MQTT broker")
            for topic in topics:
                client.subscribe(topic)
                node.get_logger().info(f"Subscribed to topic: {topic}")
        else:
            node.get_logger().info("Failed to connect to MQTT broker")

    def on_message(client, userdata, msg):
        node.get_logger().info(f"Received message on topic {msg.topic}: {msg.payload.decode()}")

    # MQTT client setup
    client = mqtt.Client()
    client.username_pw_set(username, password)
    client.on_connect = on_connect
    client.on_message = on_message

    # Connect to MQTT broker
    client.connect(broker_address, port=port)

    # Start the MQTT loop
    client.loop_forever()

if __name__ == "__main__":
    main()
