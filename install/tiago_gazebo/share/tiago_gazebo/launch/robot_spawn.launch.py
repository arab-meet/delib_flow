# Copyright (c) 2022 PAL Robotics S.L. All rights reserved.
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
from pathlib import Path

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

from launch_ros.actions import Node
from dataclasses import dataclass
from launch_pal.arg_utils import LaunchArgumentsBase


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    robot_name: DeclareLaunchArgument = DeclareLaunchArgument(
        name="robot_name", description="Gazebo model name"
    )


def generate_launch_description():

    # Create the launch description and populate
    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld


def declare_actions(
    launch_description: LaunchDescription, launch_args: LaunchArguments
):
    sim_dir = get_package_share_directory('tiago_bringup')

    gazebo_spawn_robot = Node(
        package="ros_gz_sim",
        executable="create",
        output="screen",
        arguments=[
            "-model",
            LaunchConfiguration("robot_name"),
            "-topic",
            "robot_description",
        "-x", "0.0",         #added by zaynap
        "-y", "0.0",         #added by zaynap
        "-z", "0.0",         #added by zaynap
        "-Y", "0.0",       #added by zaynap -1.57
        ],
    )

    launch_description.add_action(gazebo_spawn_robot)

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='bridge_ros_gz',
        parameters=[
            {
                'config_file': os.path.join(
                    sim_dir, 'config/bridge', 'tiago_bridge.yaml'
                ),
                'use_sim_time': True,
            }
        ],
        output='screen',
    )

    launch_description.add_action(bridge)

    camera_bridge_image = Node(
        package='ros_gz_image',
        executable='image_bridge',
        name='bridge_gz_ros_camera_image',
        output='screen',
        parameters=[{
            'use_sim_time': True,
        }],
        arguments=['/head_front_camera/image'])

    launch_description.add_action(camera_bridge_image)

    camera_bridge_depth = Node(
        package='ros_gz_image',
        executable='image_bridge',
        name='bridge_gz_ros_camera_depth',
        output='screen',
        parameters=[{
            'use_sim_time': True,
        }],
        arguments=['/head_front_camera/depth_image'])

    launch_description.add_action(camera_bridge_depth)

    twist_stamper = Node(
        package="twist_stamper",
        executable="twist_stamper",
        output="screen",
        parameters = [
            {
                'frame_id': 'base_footprint',
                'use_sim_time': True,
            }
        ],
        remappings=[
            ('cmd_vel_in', '/cmd_vel_muxed'),
            ('cmd_vel_out', '/mobile_base_controller/cmd_vel')
        ],
    )

    twist_stamper_cmd_vel = Node(
        package="twist_stamper",
        executable="twist_stamper",
        output="screen",
        parameters = [
            {
                'frame_id': 'base_footprint',
                'use_sim_time': True,
            }
        ],
        remappings=[
            ('cmd_vel_in', '/cmd_vel'),
            ('cmd_vel_out', '/mobile_base_controller/cmd_vel')
        ],
    )

    launch_description.add_action(twist_stamper)
    launch_description.add_action(twist_stamper_cmd_vel)

    return
