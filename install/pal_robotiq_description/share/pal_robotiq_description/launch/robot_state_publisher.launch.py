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

import os

from dataclasses import dataclass

from ament_index_python.packages import get_package_share_directory
from launch_pal.arg_utils import LaunchArgumentsBase, read_launch_argument
from launch.actions import DeclareLaunchArgument, OpaqueFunction, SetLaunchConfiguration
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription, LaunchContext

from pathlib import Path
from launch_param_builder import load_xacro
from launch_ros.actions import Node


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):

    sim_time_arg: DeclareLaunchArgument = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='False',
        choices=['', 'True', 'False'],
        description='Use simulation time')
    robotiq_gripper: DeclareLaunchArgument = DeclareLaunchArgument(
        name='gripper',
        default_value='robotiq-2f-85',
        choices=['robotiq-2f-85', 'robotiq-2f-140'],
        description='Robotiq gripper model')


def declare_actions(launch_description: LaunchDescription, launch_args: LaunchArguments):

    launch_description.add_action(OpaqueFunction(function=setup_controller_configuration))

    rsp = Node(package='robot_state_publisher',
               executable='robot_state_publisher',
               output='both',
               parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')},
                           {'robot_description': LaunchConfiguration('robot_description')}])
    launch_description.add_action(rsp)
    return


def setup_controller_configuration(context: LaunchContext):
    gripper_argument = read_launch_argument('gripper', context)
    gripper = gripper_argument.replace('-', '_')

    robot_description = load_xacro(
        Path(os.path.join(
            get_package_share_directory('pal_robotiq_description'), 'robots',
            'pal_' + gripper + '_gripper.urdf.xacro')),
    )

    return [SetLaunchConfiguration('robot_description', robot_description)]


def generate_launch_description():

    # Create the launch description and populate
    ld = LaunchDescription()
    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld
