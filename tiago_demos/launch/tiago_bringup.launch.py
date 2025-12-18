from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    sim_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_sim'),
                'launch',
                'tiago_sim.launch.py',
            ]
        )
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

    grab2_bt_grabber_launch = IncludeLaunchDescription(
        PathJoinSubstitution(
            [
                FindPackageShare('tiago_grab'),
                'launch',
                'grab2_grabbers.launch.py',
            ]
        )
    )

    return LaunchDescription(
        [
            sim_launch,
            nav2_launch,
            moveit2_launch,
            grab2_bt_grabber_launch,
        ]
    )
