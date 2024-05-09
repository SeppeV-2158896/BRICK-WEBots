import rclpy
from rclpy.node import Node
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
from geometry_msgs.msg import PoseStamped
from rclpy.duration import Duration


class navigation(Node):
    def __init__(self):
        self.nav = BasicNavigator()
        initPose = PoseStamped()
        initPose.header.frame_id = "map"
        initPose.header.stamp = self.nav.get_clock().now().to_msg()
        initPose.pose.position.x = 0.0
        initPose.pose.position.y = 0.0
        initPose.pose.orientation.z = 1.0
        initPose.pose.orientation.w = 0.0
        
        self.nav.setInitialPose(initPose)
        self.nav.waitUntilNav2Active(localizer="bt_navigator")



        """i = 0
        while not self.nav.isTaskComplete():
            i = i + 1
        feedback = self.nav.getFeedback()
        if feedback and i % 5 == 0:
            self.get_logger().info(
                'Estimated time of arrival: '
                + '{0:.0f}'.format(
                    self.nav.from_msg(feedback.estimated_time_remaining).nanoseconds
                    / 1e9
                )
                + ' seconds.'
            )

            # Some navigation timeout to demo cancellation
            if Duration.from_msg(feedback.navigation_time) > Duration(seconds=600.0):
                self.nav.cancelTask()

            # Some navigation request change to demo preemption
            if Duration.from_msg(feedback.navigation_time) > Duration(seconds=18.0):
                goal_pose.pose.position.x = -3.0
                self.nav.goToPose(goal_pose)

        result = self.nav.getResult()
        if result == TaskResult.SUCCEEDED:
            print('Goal succeeded!')
        elif result == TaskResult.CANCELED:
            print('Goal was canceled!')
        elif result == TaskResult.FAILED:
            print('Goal failed!')
        else:
            print('Goal has an invalid return status!')

        self.nav.lifecycleShutdown()
"""





def main(args=None):
    print("kewl")
    rclpy.init(args=args)
    client_vel = navigation()
    rclpy.spin(client_vel)

    client_vel.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()