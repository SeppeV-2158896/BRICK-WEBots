from controller import Robot, Camera
from PIL import Image
import numpy as np
import random
import time
from paho.mqtt import client as mqtt_client

TIME_STEP = 32

robot = Robot()

broker = 'broker.emqx.io'
port = 1883
topic = "python/mqtt"
client_id = f'publish-{random.randint(0, 1000)}'


camera = robot.getDevice("Webcam")
camera.enable(TIME_STEP)

while robot.step(TIME_STEP) != -1:
    image = camera.getImage()

if __name__ == '__main__':
    run()  