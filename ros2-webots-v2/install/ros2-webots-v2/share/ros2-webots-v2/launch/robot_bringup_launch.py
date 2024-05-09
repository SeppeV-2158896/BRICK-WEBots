import os
import launch
from launch.substitutions import LaunchConfiguration # type: ignore
from launch.actions import DeclareLaunchArgument # type: ignore
from launch.substitutions.path_join_substitution import PathJoinSubstitution # type: ignore
from launch import LaunchDescription # type: ignore
from launch_ros.actions import Node # type: ignore
from ament_index_python.packages import get_package_share_directory # type: ignore
from launch.launch_description_sources import PythonLaunchDescriptionSource # type: ignore
from launch.actions import IncludeLaunchDescription # type: ignore
from webots_ros2_driver.webots_launcher import WebotsLauncher # type: ignore
from webots_ros2_driver.webots_controller import WebotsController # type: ignore
from webots_ros2_driver.wait_for_controller_connection import WaitForControllerConnection # type: ignore


def get_ros2_nodes(*args):
    package_dir = get_package_share_directory('ros2-webots-v2')
    use_rviz = LaunchConfiguration('rviz', default=False)
    robot_description_path = os.path.join(package_dir, 'resource', 'brick_bringup_webots.urdf')
    ros2_control_params = os.path.join(package_dir, 'resource', 'ros2_control_bringup.yml')
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)

    brick_driver = WebotsController(
        robot_name='BRICK',
        parameters=[
            {'robot_description': robot_description_path,
             'use_sim_time': use_sim_time},
            ros2_control_params
        ]
    )

    brick_bringup_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('brick_bringup'), 'launch', 'brick_bringup.launch.py')),
    )

    waiting_nodes = WaitForControllerConnection(
        target_driver=brick_driver,
        nodes_to_start=[brick_bringup_launch]
    )

    # RViz
    rviz_config = os.path.join(get_package_share_directory('ros2-webots-v2'), 'resource', 'default_bringup.rviz')
    rviz = Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['--display-config=' + rviz_config],
        parameters=[{'use_sim_time': use_sim_time}],
        condition=launch.conditions.IfCondition(use_rviz)
    )

    return [
        brick_driver,
        waiting_nodes,
        rviz,
    ]


def generate_launch_description():
    package_dir = get_package_share_directory('ros2-webots-v2')
    world = LaunchConfiguration('world')
    mode = LaunchConfiguration('mode')

    webots = WebotsLauncher(
        world=PathJoinSubstitution([package_dir, 'worlds', world]),
        mode=mode,
        ros2_supervisor=True
    )

    # The following lines are important!
    # This event handler respawns the ROS 2 nodes on simulation reset (supervisor process ends).
    reset_handler = launch.actions.RegisterEventHandler(
        event_handler=launch.event_handlers.OnProcessExit(
            target_action=webots._supervisor,
            on_exit=get_ros2_nodes,
        )
    )

    return LaunchDescription([
        DeclareLaunchArgument(
            'world',
            default_value='default_bringup.wbt',
            description='Choose one of the world files from `/ros2-webots-v2/world` directory'
        ),
        DeclareLaunchArgument(
            'mode',
            default_value='realtime',
            description='Webots startup mode'
        ),
        webots,
        webots._supervisor,

        # This action will kill all nodes once the Webots simulation has exited
        launch.actions.RegisterEventHandler(
            event_handler=launch.event_handlers.OnProcessExit(
                target_action=webots,
                on_exit=[
                    launch.actions.UnregisterEventHandler(
                        event_handler=reset_handler.event_handler
                    ),
                    launch.actions.EmitEvent(event=launch.events.Shutdown())
                ],
            )
        ),

        # Add the reset event handler
        reset_handler
    ] + get_ros2_nodes())
