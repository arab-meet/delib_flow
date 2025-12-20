from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    behavior_tree_declaration = DeclareLaunchArgument(
        'tree',
        default_value='our_map_example.xml',
        description='Behavior Tree XML file to execute, Check trees directory for examples',
    )

    # TODO: Implement loading predefined locations from a YAML file
    locations_declaration = DeclareLaunchArgument(
        'locations',
        default_value='our_map.yaml',
        description='YAML file with predefined target locations to load into the blackboard',
    )

    # Paths to configuration files
    behavior_tree_xml = PathJoinSubstitution(
        [
            FindPackageShare('tiago_demos'),
            'trees',
            [LaunchConfiguration('tree')],
        ]
    )
    locations_cfg = PathJoinSubstitution(
        [
            FindPackageShare('tiago_demos'),
            'config',
            [LaunchConfiguration('locations')],
        ]
    )

    bt_executor_node = Node(
        package='tiago_demos',
        executable='btcpp_engine',
        name='bt_executor',
        output='screen',
        parameters=[
            {
                'use_sim_time': True,
                'behavior_tree': behavior_tree_xml,
                'target_locations': locations_cfg,
            }
        ],
    )


    return LaunchDescription(
        [
            behavior_tree_declaration,
            locations_declaration,
            bt_executor_node,
        ]
    )
