from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    world = LaunchConfiguration('world')
    sim_world_declaration = DeclareLaunchArgument(
        'world',
        default_value='minimal_world',
        description='Gazebo world file to load, check worlds directory for examples',
    )

    sim_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_sim'),
                'launch',
                'tiago_sim.launch.py',
            ]
        ),
        launch_arguments={'world': world}.items(),
    )

    nav2_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_nav'),
                'launch',
                'tiago_nav2.launch.py',
            ]
        )
    )

    moveit2_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_grab'),
                'launch',
                'tiago_moveit2.launch.py',
            ]
        )
    )

    aruco_broadcaster_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_aruco_broadcast'),
                'launch',
                'aruco.launch.py',
            ]
        )
    )

    return LaunchDescription(
        [
            sim_world_declaration,
            sim_launch,
            nav2_launch,
            moveit2_launch,
            aruco_broadcaster_launch,
        ]
    )
