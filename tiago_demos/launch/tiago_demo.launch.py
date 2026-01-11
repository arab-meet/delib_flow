from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Declare launch arguments
    use_sim_time_declaration = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true',
    )

    behavior_tree_declaration = DeclareLaunchArgument(
        'tree',
        default_value='our_map_example.xml',
        description='Behavior Tree XML file to execute, Check trees directory for examples',
    )

    locations_declaration = DeclareLaunchArgument(
        'locations',
        default_value='map_locations.yaml',
        description='YAML file with predefined target locations to load into the blackboard',
    )

    # Launch configuration variables
    use_sim_time = LaunchConfiguration('use_sim_time')

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
        # arguments= ['--ros-args', '--log-level', 'debug'],
        parameters=[
            {
                'use_sim_time': use_sim_time,
                'behavior_tree': behavior_tree_xml,
                'target_locations': locations_cfg,
            }
        ],
    )

    return LaunchDescription(
        [
            use_sim_time_declaration,
            behavior_tree_declaration,
            locations_declaration,
            bt_executor_node,
        ]
    )
