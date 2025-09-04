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
from os import environ, pathsep

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    SetEnvironmentVariable,
    IncludeLaunchDescription,
    ExecuteProcess,
    OpaqueFunction
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution


def start_gzserver(context, *args, **kwargs):
    pkg_path = get_package_share_directory('tiago_sim')

    world_name = LaunchConfiguration('world_name').perform(context)
    world = os.path.join(pkg_path, 'worlds', world_name + '.sdf')

    params_file = PathJoinSubstitution(
        substitutions=[pkg_path, 'config', 'gazebo_params.yaml'])

    # Command to start the gazebo server.
    gazebo_server_cmd_line = [
        'gz', 'sim', world, '-r' , '-s']
    # Start the server under the gdb framework.
    debug = LaunchConfiguration('debug').perform(context)
    if debug == 'True':
        gazebo_server_cmd_line = (
            ['xterm', '-e', 'gdb', '-ex', 'run', '--args'] +
            gazebo_server_cmd_line
        )

    # start_gazebo_server_cmd = ExecuteProcess(
    #     cmd=gazebo_server_cmd_line, output='screen')

    start_gazebo_server_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch',
                         'gz_sim.launch.py')),
        launch_arguments={'gz_args': ['-r -s ', world]}.items()
    )

    start_gazebo_client_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'),
                         'launch',
                         'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': [' -g ']}.items(),
    )


    return [start_gazebo_server_cmd, start_gazebo_client_cmd]


def generate_launch_description():
    model_path = ''
    resource_path = ''

    # Add tiago_sim model directories
    pkg_path = get_package_share_directory('tiago_sim')
    tiago_sim_models = os.path.join(pkg_path, 'models')
   

    # Ensure both the common models dir and the test_world subdir are searched
    model_path += tiago_sim_models

    # Preserve any existing paths from the environment
    if 'GZ_SIM_MODEL_PATH' in environ and environ['GZ_SIM_MODEL_PATH']:
        model_path += pathsep + environ['GZ_SIM_MODEL_PATH']
    if 'GZ_SIM_RESOURCE_PATH' in environ and environ['GZ_SIM_RESOURCE_PATH']:
        resource_path += pathsep + environ['GZ_SIM_RESOURCE_PATH']

    declare_world_name = DeclareLaunchArgument(
        'world_name', default_value='',
        description="Specify world name, we'll convert to full path"
    )
    declare_debug = DeclareLaunchArgument(
        'debug', default_value='False',
        choices=['True', 'False'],
        description='If debug start the gazebo world into a gdb session in an xterm terminal'
    )

    start_gazebo_server_cmd = OpaqueFunction(function=start_gzserver)

    # Create the launch description and populate
    ld = LaunchDescription()

    ld.add_action(SetEnvironmentVariable('GZ_SIM_RESOURCE_PATH', model_path))
    ld.add_action(declare_debug)
    ld.add_action(declare_world_name)

    ld.add_action(SetEnvironmentVariable('GZ_SIM_MODEL_PATH', model_path))
    # Using this prevents shared library from being found
    # ld.add_action(SetEnvironmentVariable('GAZEBO_RESOURCE_PATH', resource_path))

    ld.add_action(start_gazebo_server_cmd)

    return ld
