# Copyright (c) 2024 PAL Robotics S.L. All rights reserved.
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
from os import pathsep, environ
from dataclasses import dataclass


from ament_index_python.packages import get_package_prefix

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, SetEnvironmentVariable
from launch_pal.include_utils import include_scoped_launch_py_description
from launch_pal.arg_utils import LaunchArgumentsBase
from launch_pal.include_utils import include_launch_py_description


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    use_sim_time: DeclareLaunchArgument = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='True',
        description='Use simulation time')


def get_model_paths(packages_names):
    model_paths = ''
    for package_name in packages_names:
        if model_paths != '':
            model_paths += pathsep

        package_path = get_package_prefix(package_name)
        model_path = os.path.join(package_path, 'share')

        model_paths += model_path

    return model_paths


def declare_actions(ld: LaunchDescription, launch_args: LaunchArguments):

    robot_state_publisher = include_scoped_launch_py_description(
        pkg_name='pal_gripper_simulation',
        paths=['launch', 'robot_state_publisher.launch.py'],
        launch_arguments={
            "use_sim_time": launch_args.use_sim_time
        })

    spawn_model = include_launch_py_description(
        'pal_gripper_simulation', ['launch', 'gripper_spawn.launch.py'])

    pal_gripper_controllers = include_launch_py_description(
        pkg_name='pal_gripper_controller_configuration',
        paths=['launch', 'pal_gripper_controller.launch.py'])

    joint_state_broadcaster_launch = include_launch_py_description(
        pkg_name='pal_gripper_controller_configuration',
        paths=['launch', 'joint_state_broadcaster.launch.py'])

    packages = ['pal_gripper_description']
    model_path = pathsep + get_model_paths(packages)

    if 'GAZEBO_MODEL_PATH' in environ:
        model_path += pathsep + environ['GAZEBO_MODEL_PATH']

    gazebo_model_path_env_var = SetEnvironmentVariable(
        'GAZEBO_MODEL_PATH', model_path)

    gazebo = include_scoped_launch_py_description(
        pkg_name='pal_gazebo_worlds',
        paths=['launch', 'pal_gazebo.launch.py'],
        env_vars=[gazebo_model_path_env_var],
        launch_arguments={
            "world_name": 'empty',
            "model_paths": packages,
            "resource_paths": packages,
        })

    ld.add_action(gazebo)
    ld.add_action(robot_state_publisher)
    ld.add_action(spawn_model)
    ld.add_action(pal_gripper_controllers)
    ld.add_action(joint_state_broadcaster_launch)


def generate_launch_description():

    ld = LaunchDescription()

    launch_arguments = LaunchArguments()

    launch_arguments.add_to_launch_description(ld)

    declare_actions(ld, launch_arguments)

    return ld
