from launch import LaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():

    param_config = PathJoinSubstitution(
        [
            FindPackageShare('tiago_grab'),
            'config',
            'grabbers_config.yaml',
        ]
    )

    pick_tree_xml_file = PathJoinSubstitution(
        [
            FindPackageShare('tiago_grab'),
            'behavior_trees',
            'pick_object_bt.xml',
        ]
    )

    pick_object_engine = Node(
        package='grab2_bt_grabber',
        executable='bt_engine',
        name='pick_object_server',  ## This name must match the one in grabbers_config.yaml
        output='screen',
        parameters=[param_config, {'tree_file': pick_tree_xml_file}],
    )

    return LaunchDescription([pick_object_engine])
