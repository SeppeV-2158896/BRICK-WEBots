from setuptools import find_packages, setup

package_name = 'ros2-webots-v2'

data_files = []
data_files.append(
    ('share/ament_index/resource_index/packages', ['resource/' + package_name]))
data_files.append(('share/' + package_name + '/launch', [
    'launch/robot_launch.py',
    'launch/robot_bringup_launch.py'
]))
data_files.append(('share/' + package_name + '/resource', [
    'resource/brick_webots.urdf',
    'resource/brick_bringup_webots.urdf',
    'resource/ros2_control.yml',
    'resource/ros2_control_bringup.yml',
    'resource/nav2_params.yaml',
    'resource/nav2_params_iron.yaml',
    'resource/default.rviz',
    'resource/default_bringup.rviz',
    'resource/cartographer.lua',
    'resource/slam_toolbox_params.yaml',
]))
data_files.append(('share/' + package_name + '/protos', ['protos/BRICK.proto']))
data_files.append(('share/' + package_name, ['package.xml']))
data_files.append(('share/' + package_name + '/worlds', [
    'worlds/default.wbt',
    'worlds/.default.wbproj',
    'worlds/default_bringup.wbt',
    'worlds/.default_bringup.wbproj'
]))

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files= data_files,
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='seppe',
    maintainer_email='seppe.vandenberk@student.uhasselt.be',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'launch.frontend.launch_extension': ['launch_ros = launch_ros']
    }
)
