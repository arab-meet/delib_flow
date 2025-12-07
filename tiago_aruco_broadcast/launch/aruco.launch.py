import os
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():

    # Paths to configuration files

    aruco_yaml = os.path.join(
        get_package_share_directory('tiago_aruco_broadcast'),
        'config',
        'aruco_params.yaml',
    )

    aruco_node = Node(
        package='ros2_aruco',
        executable='aruco_node',
        name='aruco_node',
        output='screen',
        parameters=[aruco_yaml],
    )

    aruco_broadcast_node = Node(
        package='tiago_aruco_broadcast',
        executable='aruco_broadcast',
        name='aruco_broadcast',
        output='screen',
    )

    return LaunchDescription([aruco_node, aruco_broadcast_node])
