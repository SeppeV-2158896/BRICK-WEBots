#!/bin/bash


source /opt/ros/iron/setup.bash

colcon build

source install/setup.bash

ros2 launch webots_ros2_brick robot_launch.py&

ros2 launch vizanti_server vizanti_server.launch.py&

ros2 launch rosbridge_server rosbridge_websocket_launch.xml&

