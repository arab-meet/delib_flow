import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    tiago_gazebo_dir = get_package_share_directory('tiago_sim')

    # YOLOv11
    yolo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [
                PathJoinSubstitution(
                    [FindPackageShare('yolo_bringup'), 'launch/yolov11.launch.py']
                )
            ]
        ),
        launch_arguments={
            'model': os.path.join(tiago_gazebo_dir, 'models', 'yolo11m.pt'),
            'threshold': '0.5',
            'input_image_topic': 'head_front_camera/image',
            'device': 'cuda:0',
            'namespace': '',
        }.items(),
    )

    ld = LaunchDescription()
    ld.add_action(yolo_launch)

    return ld