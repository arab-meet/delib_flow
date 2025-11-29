import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    # Paths to configuration files
    planner_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'planner_server.yaml'
    )
    controller_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'controller.yaml'
    )
    bt_navigator_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'bt_navigator.yaml'
    )
    recovery_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'recovery.yaml'
    )
    docking_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'nova_carter_docking.yaml'
    )
    dock_database = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'dock_database.yaml'
    )
    amcl_yaml = os.path.join(
        get_package_share_directory('tiago_nav'), 'config', 'tiago_amcl.yaml'
    )
    map_file = os.path.join(
        get_package_share_directory('tiago_nav'), 'maps', 'map.yaml'
    )
    rviz_file = os.path.join(
        get_package_share_directory('tiago_nav'), 'rviz', 'tiago_nav.rviz'
    )
    # Define the RViz node
    return LaunchDescription(
        [
            Node(
                package='nav2_map_server',
                executable='map_server',
                name='map_server',
                output='screen',
                parameters=[{'use_sim_time': True}, {'yaml_filename': map_file}],
            ),
            Node(
                package='nav2_amcl',
                executable='amcl',
                name='amcl',
                output='screen',
                parameters=[amcl_yaml, {'use_sim_time': True}],
            ),
            Node(
                package='nav2_controller',
                executable='controller_server',
                name='controller_server',
                output='screen',
                parameters=[controller_yaml, {'use_sim_time': True}],
            ),
            Node(
                package='nav2_planner',
                executable='planner_server',
                name='planner_server',
                output='screen',
                parameters=[planner_yaml, {'use_sim_time': True}],
            ),
            Node(
                package='nav2_behaviors',
                executable='behavior_server',
                name='recoveries_server',
                parameters=[recovery_yaml],
                output='screen',
            ),
            Node(
                package='nav2_bt_navigator',
                executable='bt_navigator',
                name='bt_navigator',
                output='screen',
                parameters=[bt_navigator_yaml],
            ),
            Node(
                package='opennav_docking',
                executable='opennav_docking',
                name='docking_server',
                output='screen',
                parameters=[
                    docking_yaml,
                    {'use_sim_time': True, 'dock_database': dock_database},
                ],
            ),
            Node(
                package='nav2_lifecycle_manager',
                executable='lifecycle_manager',
                name='lifecycle_manager_navigation',
                output='screen',
                parameters=[
                    {'autostart': True},
                    {
                        'node_names': [
                            'map_server',
                            'amcl',
                            'planner_server',
                            'controller_server',
                            'recoveries_server',
                            'bt_navigator',
                            'docking_server',
                        ]
                    },
                ],
            ),
            Node(
                package='rviz2',
                executable='rviz2',
                name='rviz2',
                arguments=['-d', rviz_file],
                parameters=[{'use_sim_time': True}],
                output='screen',
            ),
        ]
    )
