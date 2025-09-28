# Copyright (c) 2021 Intelligent Robotics Lab (URJC)
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


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
            os.path.join(tiago_gazebo_dir, 'launch', 'tiago_sim.launch.py')
        ),
        launch_arguments={
            'world_name': world,
            'is_public_sim': 'True',
        }.items(),
    )

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
    ld.add_action(tiago_sim_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(yolo_launch)

    return ld
