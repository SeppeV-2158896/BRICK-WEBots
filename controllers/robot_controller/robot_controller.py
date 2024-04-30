from controller import Robot, Camera
from PIL import Image
import numpy as np

TIME_STEP = 32

robot = Robot()

camera = robot.getDevice("Webcam")
camera.enable(TIME_STEP)

while robot.step(TIME_STEP) != -1:
    image = camera.getImage()
    