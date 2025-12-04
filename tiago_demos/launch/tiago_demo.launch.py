import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    # Paths to configuration files
    behavior_tree_xml = os.path.join(
        get_package_share_directory('tiago_demos'), 'trees', 'our_map_example.xml'
    )
    locations_cfg = os.path.join(
        get_package_share_directory('tiago_demos'), 'config', 'our_map.yaml'
    )

    return LaunchDescription(
        [
            Node(
                package='tiago_demos',
                executable='btcpp_engine',
                name='btcpp_engine',
                output='screen',
                parameters=[
                    {'use_sim_time': True},
                    {'behavior_tree': behavior_tree_xml},
                    {'target_locations': locations_cfg},
                ],
            )
        ]
    )
