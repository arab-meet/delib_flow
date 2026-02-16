# Copyright (c) 2025 PAL Robotics S.L. All rights reserved.
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

from ament_index_python import get_package_share_directory

from dataclasses import dataclass

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

from launch_pal import get_pal_configuration
from launch_pal.arg_utils import LaunchArgumentsBase
from launch_pal.robot_arguments import CommonArgs


@dataclass(frozen=True)
class LaunchArguments(LaunchArgumentsBase):
    namespace: DeclareLaunchArgument = CommonArgs.namespace


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
    map_server_node = 'map_server'
    map_saver_node = 'map_saver'
    amcl_node = 'amcl'
    lifecycle_manager_node = 'lifecycle_manager_localization'

    map_server_config = get_pal_configuration(
        pkg='nav2_map_server',
        node=map_server_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    map_saver_config = get_pal_configuration(
        pkg='nav2_map_server',
        node=map_saver_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    amcl_config = get_pal_configuration(
        pkg='nav2_amcl',
        node=amcl_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )
    lifecycle_manager_config = get_pal_configuration(
        pkg='nav2_lifecycle_manager',
        node=lifecycle_manager_node,
        ld=launch_description,
        cmdline_args=['use_sim_time'],
    )

    map_server = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_map_server',
        executable='map_server',
        name=map_server_node,
        output='screen',
        emulate_tty=True,
        parameters=map_server_config['parameters'],
        remappings=map_server_config['remappings'],
    )

    launch_description.add_action(map_server)

    map_saver = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_map_server',
        executable='map_saver_server',
        name=map_saver_node,
        output='screen',
        emulate_tty=True,
        parameters=map_saver_config['parameters'],
        remappings=map_saver_config['remappings'],
    )

    launch_description.add_action(map_saver)

    amcl = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_amcl',
        executable='amcl',
        name=amcl_node,
        output='screen',
        emulate_tty=True,
        parameters=amcl_config['parameters'],
        remappings=amcl_config['remappings'],
    )

    launch_description.add_action(amcl)

    lifecycle_manager = Node(
        namespace=LaunchConfiguration('namespace'),
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name=lifecycle_manager_node,
        output='screen',
        emulate_tty=True,
        parameters=lifecycle_manager_config['parameters'],
        remappings=lifecycle_manager_config['remappings'],
    )

    launch_description.add_action(lifecycle_manager)

    nav2_analyzer = Node(
        package='diagnostic_aggregator',
        executable='add_analyzer',
        namespace='pmb2_2dnav',
        output='screen',
        emulate_tty=True,
        parameters=[
            os.path.join(
                get_package_share_directory('pmb2_2dnav'), 'config', 'nav2_analyzers.yaml')],
    )
    launch_description.add_action(nav2_analyzer)
