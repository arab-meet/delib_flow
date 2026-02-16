# Copyright (c) 2023 PAL Robotics S.L. All rights reserved.
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

from dataclasses import dataclass

from launch.actions import DeclareLaunchArgument
from launch import LaunchDescription
from launch_pal.arg_utils import LaunchArgumentsBase
from launch_pal.include_utils import include_scoped_launch_py_description
from launch_ros.actions import Node
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    robotiq_gripper: DeclareLaunchArgument = DeclareLaunchArgument(
        'gripper',
        default_value='robotiq-2f-85',
        choices=['robotiq-2f-85', 'robotiq-2f-140'],
        description='Robotiq gripper model'
    )


def declare_actions(launch_description: LaunchDescription, launch_args: LaunchArguments):
    robot_state_publisher = include_scoped_launch_py_description(
        pkg_name='pal_robotiq_description',
        paths=['launch', 'robot_state_publisher.launch.py'],
        launch_arguments={'gripper': launch_args.robotiq_gripper})
    launch_description.add_action(robot_state_publisher)

    start_joint_pub_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen')
    launch_description.add_action(start_joint_pub_gui)

    rviz_config_file = PathJoinSubstitution(
        [FindPackageShare('pal_robotiq_description'), 'config', 'pal_robotiq_urdf.rviz'])

    start_rviz_cmd = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen')

    launch_description.add_action(start_rviz_cmd)

    return


def generate_launch_description():

    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld
