import os
import launch
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from webots_ros2_driver.webots_launcher import WebotsLauncher
from webots_ros2_driver.webots_controller import WebotsController
from launch.substitutions import Command, FindExecutable, PathJoinSubstitution, LaunchConfiguration
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    package_dir = get_package_share_directory('webots_ros2_brick')
    robot_description_path = os.path.join(package_dir, 'resource', 'brick.urdf')

    webots = WebotsLauncher(
        world=os.path.join(package_dir, 'worlds', 'turtlebot3_burger_example.wbt')
    )
    
    my_robot_driver = WebotsController(
        robot_name='BRICKV1',
        parameters=[
            {'robot_description': robot_description_path},
        ]
    )

    mqtt_receiver_node = Node(
        package='webots_ros2_brick',
        executable='mqtt_handler',
    )

    mqtt_videostream_node = Node(
        package='webots_ros2_brick',
        executable='mqtt_videostream',
    )

    navigation_node = Node(
        package='webots_ros2_brick',
        executable='navigator',
    )

    navigation_launch = launch.actions.ExecuteProcess(
        cmd=['ros2', 'launch', 'nav2_bringup', 'navigation_launch.py', 'use_sim_time:=True'],
        output='screen',
    )
    slam_toolbox_launch = launch.actions.ExecuteProcess(
        cmd=['ros2', 'run', 'slam_toolbox', 'async_slam_toolbox_node',
            '--ros-args', '--param', 'use_sim_tile:=true', '--params-file', os.path.join(package_dir, 'config', 'slam_config.yaml')],
        output='screen',
    )


  
    return LaunchDescription([
        webots,
        #viz_web,
        navigation_node,
        my_robot_driver,
        mqtt_receiver_node,
        mqtt_videostream_node,
        navigation_launch,
        slam_toolbox_launch,
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[launch.actions.EmitEvent(event=launch.events.Shutdown())],
            )
        ),
        #navigation_node#,
    ])
