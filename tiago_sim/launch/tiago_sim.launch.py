import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    tiago_gazebo_dir = get_package_share_directory('tiago_sim')

    world = LaunchConfiguration('worlds', default='test_world')
    declare_world_cmd = DeclareLaunchArgument(
        'worlds',
        default_value='test_world',
        description='World name',
    )

    tiago_sim_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(tiago_gazebo_dir, 'launch', 'tiago_pal_sim.launch.py')
        ),
        launch_arguments={
            'world_name': world,
            'is_public_sim': 'True',
        }.items(),
    )

    ld = LaunchDescription()
    ld.add_action(tiago_sim_cmd)
    ld.add_action(declare_world_cmd)

    return ld