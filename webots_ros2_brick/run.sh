colcon build
source /opt/ros/iron/setup.bash
source ~/brick/BRICK_WEBOTS/webots_ros2_brick/install/setup.bash
ros2 launch webots_ros2_brick robot_launch.py & ros2 run slam_toolbox async_slam_toolbox_node --ros-args --param use_sim_tile:=true --params-file slam_config.yaml & ros2 launch nav2_bringup navigation_launch.py use_sim_time:=True & ros2 run rviz2 rviz2 -d /opt/ros/iron/share/nav2_bringup/rviz/nav2_default_view.rviz 
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp