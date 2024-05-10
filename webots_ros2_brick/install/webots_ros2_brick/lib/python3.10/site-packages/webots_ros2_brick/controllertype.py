"""tb_controller controller."""
import math
import threading
import socket
import numpy as np
# You may need to import some classes of the controller module. Ex:
#  from controller import Robot, Motor, DistanceSensor
from controller import Robot

class PIDController:
    def __init__(self, p_gain, i_gain, d_gain, delta_t):
        
        # Params
        self.p_gain = p_gain
        self.i_gain = i_gain
        self.d_gain = d_gain
        self.delta_t = delta_t
        
        # Errors
        self.error = 0.0
        self.integral_error = 0.0
        
        # Values
        self.goal_value = None
        self.current_value = None
        self.previous_value = None
    
    def calculate_error(self):
        return self.goal_value - self.current_value
        
    def set_current_value(self, current_value):
        self.current_value = current_value
    
    def set_goal(self, goal_value, current_value):
        self.goal_value = goal_value
        self.current_value = current_value
        if self.previous_value is None:
            self.previous_value = current_value
        self.integral_error = 0.0
        
    def get_command(self):
        self.error = self.calculate_error()
        output = self.p_gain * self.error
        self.integral_error += self.error * self.delta_t
        output += self.i_gain * self.integral_error
        output += self.d_gain * (self.previous_value - self.current_value)
        self.previous_value = self.current_value
        return output 
        
class TCPServer:
    def __init__(self, host, port):
        self.host = host
        self.port = port
        self.server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.queue = []

    def start(self):
        self.server_socket.bind((self.host, self.port))
        self.server_socket.listen(5)
        print("Server is listening for incoming connections...")

        while True:
            client_socket, address = self.server_socket.accept()
            print(f"Connection from {address} has been established.")
            while True:
                self.handle_client(client_socket)


    def handle_client(self, client_socket):
        data = client_socket.recv(1024)
        print(f"Received data from client: {data.decode()}")
        x_str,y_str = data.decode().split()
        position = (float(x_str),float(y_str))


        self.queue.append(position)
        client_socket.send("Message received by the server.".encode())

class speedController():
    def __init__(self, robot):
        self.robot = robot
        self.max_speed = 5.0  # Set your maximum speed here
        self.min_speed = -5.0  # Set your minimum speed here
        self.right_motor = robot.right_motor
        self.left_motor = robot.left_motor


    def calculate_desired_velocity(self, position_command, orientation_command):
        # Calculate desired linear velocity based on position command
        linear_velocity = 5
        # Calculate desired angular velocity based on orientation command
        angular_velocity = 2.5
        # Adjust linear velocity based on position command
        if abs(position_command) < 0.01:  # Threshold for slowing down linear velocity
            linear_velocity *= position_command  # Reduce linear velocity when position command is close to zero
        # Adjust angular velocity based on orientation command
        if abs(orientation_command) > 0.01:  # Threshold for slowing down angular velocity
            angular_velocity =orientation_command  # Reduce angular velocity when orientation command is large
        # Convert linear and angular velocities to wheel velocities
        right_velocity = linear_velocity + angular_velocity/2
        left_velocity = linear_velocity - angular_velocity/2
    
        return -left_velocity,-right_velocity

    def regulateSpeed(self):
        while True:
            # Calculate desired speed based on longitudinal PID controller output
            desired_speed = self.longitudinal_pid.compute()

            # Adjust speed based on additional logic (e.g., slowing down before a corner)
            desired_speed = self.adjust_speed(desired_speed)

            desired_speed = max(self.min_speed, min(desired_speed, self.max_speed))

            # Set the motor speeds
            self.right_motor.setVelocity(desired_speed)
            self.left_motor.setVelocity(desired_speed)
    def adjust_speed(self, desired_speed):
        # Implement additional logic to adjust speed based on specific conditions
        # For example, you can slow down before a corner based on sensor inputs or predefined waypoints
        # Here's a simple example:
        return desired_speed
class TurtleBot(Robot):
    timeStep = 32

    def __init__(self):
        super(TurtleBot, self).__init__()

        # Get and enable the lidar
        
        self.tcp_server = TCPServer(socket.gethostname(), 12345)
        self.tcp_thread = threading.Thread(target=self.tcp_server.start)
        self.tcp_thread.daemon = True  # So the thread closes when the main program exits
        self.tcp_thread.start()

        self.lidar = self.getDevice('LDS-01')
        self.lidar.enable(self.timeStep)
        self.lidar.enablePointCloud()

        # get lidar properties
        self.lidar_width = self.lidar.getHorizontalResolution()
        self.lidar_max_range = self.lidar.getMaxRange()

        # Get lidar motor and enable rotation (only for visualization, no effect on the sensor)
        self.lidar_main_motor = self.getDevice('LDS-01_main_motor')
        self.lidar_secondary_motor = self.getDevice('LDS-01_secondary_motor')
        self.lidar_main_motor.setPosition(float('inf'))
        self.lidar_secondary_motor.setPosition(float('inf'))
        self.lidar_main_motor.setVelocity(30.0)
        self.lidar_secondary_motor.setVelocity(60.0)

        # get the GPS sensor
        self.gps = self.getDevice('gps')
        self.gps.enable(self.timeStep)

        # get the IMU sensor
        self.imu = self.getDevice('imu')
        self.imu.enable(self.timeStep)

        # get the motors and enable velocity control
        self.right_motor = self.getDevice("right wheel motor")
        self.left_motor = self.getDevice("left wheel motor")
        self.right_motor.setPosition(float('inf'))
        self.left_motor.setPosition(float('inf'))
        self.right_motor.setVelocity(0.0)
        self.left_motor.setVelocity(0.0)

        # get the motor encoders
        self.right_encoder = self.getDevice("right wheel sensor")
        self.right_encoder.enable(self.timeStep)
        self.left_encoder = self.getDevice("left wheel sensor")
        self.left_encoder.enable(self.timeStep)
        
    def calculate_position_error(self, goal_position, current_position):
        return math.sqrt((goal_position[0] - current_position[0])**2 +
            (goal_position[1] - current_position[1])**2)
    
    def run(self):
        position_goal_set = False
        orientation_goal_set = False
        position_pid = PIDController(1, 0.01, 0.01, self.timeStep/1000.0)
        orientation_pid = PIDController(1, 0.01, 0.01, self.timeStep/1000.0)
        speedControl = speedController(robot)
        while True:
            position = self.gps.getValues()
            if math.isnan(position[0]):
                # Hack to ignore first GPS value being NaN
                self.step(self.timeStep)
                continue
            orientation = self.imu.getRollPitchYaw()[2]

            if len(self.tcp_server.queue) > 0:
                self.goal_position = self.tcp_server.queue[0]
                position_pid.set_goal(0, self.calculate_position_error(self.goal_position, position))
                position_goal_set = True
                position_pid.set_current_value(self.calculate_position_error(self.goal_position, position))
                position_command = position_pid.get_command()

                # if not orientation_goal_set:
                y_diff = self.goal_position[1] - position[1]
                x_diff = self.goal_position[0] - position[0]
                orientation_pid.set_goal(math.atan2(y_diff, x_diff), orientation)
                    # orientation_goal_set = True

                orientation_pid.set_current_value(orientation)
                orientation_command = orientation_pid.get_command()
                #print(orientation_command,position_command,"commands")
                right_vel = 0.0
                left_vel = 0.0

                if orientation_command > 0.05:
                    right_vel = self.right_motor.getMaxVelocity()
                    left_vel = -self.left_motor.getMaxVelocity()
                elif orientation_command < -0.05:
                    right_vel = -self.right_motor.getMaxVelocity()
                    left_vel = self.left_motor.getMaxVelocity()
                else:
                    right_vel = 0.0
                    left_vel = 0.0

                #print("or", right_vel, left_vel)

                if math.fabs(position_command) > 0.01:
                    right_vel += self.right_motor.getMaxVelocity()
                    left_vel += self.left_motor.getMaxVelocity()
                else:
                    right_vel += 0.0
                    left_vel += 0.0

                #print(right_vel, left_vel)

                #print("pos_err:", position_pid.error, "orient_err:", orientation_pid.error)

                #print(right_vel, left_vel)

                print("pos_err:", position_pid.error, "orient_err:", orientation_pid.error)

                if math.fabs(position_pid.error) < 0.01:# and math.fabs(position_pid.error[1]) < 0.01:
                    print("Here!")
                    position_goal_set = False
                    if(len(self.tcp_server.queue) > 0):
                        self.tcp_server.queue.pop(0)
                        print("popped")
                    right_vel = 0.0
                    left_vel = 0.0
                self.right_motor.setVelocity(right_vel)
                self.left_motor.setVelocity(left_vel)



            if self.step(self.timeStep) == -1:
                break


    def calculate_curvature(p1, p2, p3):
        # Calculate curvature based on three consecutive points (p1, p2, p3)
        # Using circle approximation method
        # Given three points, form two vectors: p1p2 and p2p3
        p1p2 = p2 - p1
        p2p3 = p3 - p2
        
        # Calculate the angle between the vectors using dot product
        cos_angle = np.dot(p1p2, p2p3) / (np.linalg.norm(p1p2) * np.linalg.norm(p2p3))
        angle = np.arccos(np.clip(cos_angle, -1.0, 1.0))
        
        # Calculate the radius of the circle passing through the three points
        # The curvature is the reciprocal of the radius
        # If the angle is small (close to a straight line), curvature will be large
        # If the angle is large (sharp turn), curvature will be small
        # Return the curvature value
        try:
            return 1.0 / np.abs(np.sin(angle))
        except ZeroDivisionError:
            # If angle is close to 0 or pi, curvature is very large (approaching infinity)
            return float('inf')
        

    def smooth_path(self):
        points = self.tcp_server.queue
        resolution=0.1
        velocity=5.0
        smoothed_path = []
        segment_times = []  # To store the adjusted time for each segment

        for i in range(len(points) - 2):
            p1 = np.array(points[i])
            p2 = np.array(points[i + 1])
            p3 = np.array(points[i + 2])
            
            # Calculate curvature for the current segment
            curvature = calculate_curvature(p1, p2, p3)
            
            # Adjust segment time based on curvature
            segment_time = distance / (velocity * (1 + curvature))  # Adjusted based on curvature
            segment_times.append(segment_time)

            distance = np.linalg.norm(p2 - p1)
            num_segments = int(distance / resolution)
            
            for j in range(num_segments):
                alpha = float(j) / num_segments
                interpolated_point = (1 - alpha) * p1 + alpha * p2
                smoothed_path.append(interpolated_point.tolist())
            # Add the last point
            smoothed_path.append(points[-1])
            
            return smoothed_path, segment_times


# create the Robot instance.
robot = TurtleBot()
robot.run()

# get the time step of the current world.
# timestep = int(robot.getBasicTimeStep())

# You should insert a getDevice-like function in order to get the
# instance of a device of the robot. Something like:
#  motor = robot.getDevice('motorname')
#  ds = robot.getDevice('dsname')
#  ds.enable(timestep)

# Main loop:
# - perform simulation steps until Webots is stopping the controller
# while robot.step(timestep) != -1:
# Read the sensors:
# Enter here functions to read sensor data, like:
#  val = ds.getValue()

# Process sensor data here.

# Enter here functions to send actuator commands, like:
#  motor.setPosition(10.0)
#    pass

# Enter here exit cleanup code.
