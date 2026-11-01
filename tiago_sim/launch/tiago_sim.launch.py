import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    tiago_gazebo_dir = get_package_share_directory('tiago_sim')

    world = LaunchConfiguration('world')
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value='minimal_world',
        description='Gazebo world file to load, check worlds directory for examples',
    )

    headless = LaunchConfiguration('headless')
    declare_headless_cmd = DeclareLaunchArgument(
        'headless',
        default_value='False',
        description='Run the Gazebo server with EGL rendering and no GUI client',
    )

    moveit = LaunchConfiguration('moveit')
    declare_moveit_cmd = DeclareLaunchArgument(
        'moveit',
        default_value='True',
        description='Start PAL move_group with the simulation',
    )

    tiago_sim_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(tiago_gazebo_dir, 'launch', 'tiago_pal_sim.launch.py')
        ),
        launch_arguments={
            'world_name': world,
            'is_public_sim': 'True',
            'headless': headless,
            'moveit': moveit,
        }.items(),
    )

    ld = LaunchDescription()
    ld.add_action(tiago_sim_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_headless_cmd)
    ld.add_action(declare_moveit_cmd)

    return ld
