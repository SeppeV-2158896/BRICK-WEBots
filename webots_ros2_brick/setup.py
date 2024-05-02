from setuptools import find_packages, setup

package_name = 'webots_ros2_brick'
data_files = []
data_files.append(('share/ament_index/resource_index/packages', ['resource/' + package_name]))
data_files.append(('share/' + package_name + '/launch', ['launch/robot_launch.py']))
data_files.append(('share/' + package_name + '/worlds', ['worlds/test_environment.wbt']))
data_files.append(('share/' + package_name + '/resource', ['resource/brick.urdf']))
data_files.append(('share/' + package_name, ['package.xml']))
data_files.append(('share/' + package_name + '/protos', ['protos/BRICK.proto']))
data_files.append(('share/' + package_name + '/protos', ['protos/Hoap2.proto']))
data_files.append(('share/' + package_name, ['metal.jpg']))
data_files.append(('share/' + package_name, ['texture.jpg']))

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=data_files,
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user.name@mail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_robot_driver = webots_ros2_brick.Brick_driver:main'
        ],
    },
)