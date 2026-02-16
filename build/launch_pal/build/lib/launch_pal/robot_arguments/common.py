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


from launch.actions import DeclareLaunchArgument
from dataclasses import dataclass


@dataclass(frozen=True, kw_only=True)
class CommonArgs:
    """This class contains a collection of frequently used LaunchArguments."""

    use_sim_time: DeclareLaunchArgument = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='False',
        choices=['True', 'False'],
        description='Use simulation time.')
    namespace: DeclareLaunchArgument = DeclareLaunchArgument(
        name='namespace',
        default_value='',
        description='Define namespace of the robot.')
    robot_name: DeclareLaunchArgument = DeclareLaunchArgument(
        'robot_name',
        default_value='pmb2',
        description='Name of the robot. ',
        choices=['pmb2', 'tiago', 'tiago_dual', 'pmb3', 'ari', 'omni_base', 'tiago_pro'])
    navigation: DeclareLaunchArgument = DeclareLaunchArgument(
        name='navigation',
        default_value='False',
        choices=['True', 'False'],
        description='Specify if launching Navigation2.')
    advanced_navigation: DeclareLaunchArgument = DeclareLaunchArgument(
        name='advanced_navigation',
        default_value='False',
        choices=['True', 'False'],
        description='Specify if launching Advanced Navigation.')
    moveit: DeclareLaunchArgument = DeclareLaunchArgument(
        name='moveit',
        default_value='True',
        choices=['True', 'False'],
        description='Specify if launching MoveIt 2.')
    slam: DeclareLaunchArgument = DeclareLaunchArgument(
        "slam",
        default_value="False",
        description="Whether or not you are using SLAM",
    )
    world_name: DeclareLaunchArgument = DeclareLaunchArgument(
        name='world_name',
        default_value='pal_office',
        description="Specify world name, will be converted to full path.")
    is_public_sim: DeclareLaunchArgument = DeclareLaunchArgument(
        name='is_public_sim',
        default_value='False',
        choices=['True', 'False'],
        description="Enable public simulation.")
    use_sensor_manager: DeclareLaunchArgument = DeclareLaunchArgument(
        name='use_sensor_manager',
        default_value='False',
        choices=['True', 'False'],
        description='Use moveit_sensor_manager for octomap')
    tuck_arm: DeclareLaunchArgument = DeclareLaunchArgument(
        name='tuck_arm',
        default_value='True',
        choices=['True', 'False'],
        description='Launches tuck arm node')
    x: DeclareLaunchArgument = DeclareLaunchArgument(
        name="x",
        description="X pose of the robot",
        default_value="0.0")
    y: DeclareLaunchArgument = DeclareLaunchArgument(
        name="y",
        description="Y pose of the robot",
        default_value="0.0")
    z: DeclareLaunchArgument = DeclareLaunchArgument(
        name="z",
        description="Z pose of the robot",
        default_value="0.0")
    roll: DeclareLaunchArgument = DeclareLaunchArgument(
        name="roll",
        description="Roll pose of the robot",
        default_value="0.0")
    pitch: DeclareLaunchArgument = DeclareLaunchArgument(
        name="pitch",
        description="Pitch pose of the robot",
        default_value="0.0")
    yaw: DeclareLaunchArgument = DeclareLaunchArgument(
        name="yaw",
        description="Yaw pose of the robot",
        default_value="0.0")
