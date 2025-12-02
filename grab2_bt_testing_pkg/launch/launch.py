from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='grab2_bt_testing_pkg',
            executable='pick_and_navigate_node',
            name='pick_and_navigate_node',
            output='screen',
            parameters=['config/pick_and_navigate.yaml']
        )
    ])
