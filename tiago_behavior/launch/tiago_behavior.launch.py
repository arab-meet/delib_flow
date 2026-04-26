import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node


def generate_launch_description():
    tiago_behavior_dir = get_package_share_directory('tiago_behavior')

    tree_xml_arg = DeclareLaunchArgument(
        'tree_xml_path',
        default_value=os.path.join(tiago_behavior_dir, 'config', 'tree.xml'),
        description='Full path to the behavior tree XML file',
    )

    bt_navigator = Node(
        package='tiago_behavior',
        executable='main_bt',
        name='main_bt',
        output='screen',
        parameters=[{'tree_xml_path': LaunchConfiguration('tree_xml_path')}],
    )

    return LaunchDescription([tree_xml_arg, bt_navigator])
