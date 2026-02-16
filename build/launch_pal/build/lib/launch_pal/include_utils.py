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

from typing import List, Dict, Optional
import copy
from launch import SomeSubstitutionsType
from launch.actions import IncludeLaunchDescription, GroupAction, DeclareLaunchArgument
from launch.actions import SetEnvironmentVariable

from launch import Action
from launch import Condition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution, LaunchConfiguration
from launch_ros.substitutions import FindPackageShare


def include_launch_py_description(
        pkg_name: SomeSubstitutionsType,
        paths: List[SomeSubstitutionsType],
        **kwargs) -> Action:
    """
    Return IncludeLaunchDescription for the file inside pkg at paths.

    Example:
    -------
        include_launch_py_description('my_pkg', ['launch', 'my_file.launch.py'])
        returns file IncludeLaunchDescription from PATH_TO_MY_PKG_SHARE/launch/my_file.launch.py

    """
    pkg_dir = FindPackageShare(pkg_name)
    full_path = PathJoinSubstitution([pkg_dir] + paths)

    return IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            full_path),
        **kwargs)


def include_scoped_launch_py_description(
        pkg_name: SomeSubstitutionsType,
        paths: List[SomeSubstitutionsType],
        launch_arguments: Dict = {},
        env_vars: List[SetEnvironmentVariable] = [],
        condition: Optional[Condition] = None,
        **kwargs) -> Action:
    """
    Return a GroupAction for the launch file inside pkg at paths.

    The launch file will be scoped and launch arguments or environment variables have to be
    explicitly passed on in this function.

    Parameters
    ----------
    pkg_name: str
        Name of the package of the launch file
    paths: List[str]
        Relative path to the launch file
    launch_arguments: Dict
        Dictionary of arguments required for the launch file. The key is the name of the
        argument, the value can be a LaunchConfiguration, DeclareLaunchArgument or default
        type (int, str, float etc.). Remappings of argument names are also done here.
    env_vars: List[SetEnvironmentVariable]
        Environment variables required for the launch file
    condition: Optional[Condition]
        Conditionally include this launch file
    **kwargs:
        Any other required function arguments


    Returns
    -------
    scoped_launch_file: GroupAction
        The launch file wrapped as a group action
    -------

    Example:
    -------
    include_scoped_launch_py_description('my_pkg', ['launch', 'my_file.launch.py'],
    launch_arguments= { 'arg_a': DeclareLaunchArgument('arg_a'),
                    'arg_2': DeclareLaunchArgument('arg_b'),
                    'arg_c': LaunchConfiguration('arg_c'),
                    'arg_d': "some_value' }
    env_vars= [SetEnvironmentVariable("VAR_NAME", 'value)]
    condition=IfCondition(LaunchConfiguration('arg_a')))

    """
    # Note: In case the argument name is remapped and the argument value type is
    # DeclareLaunchArgument the argument has to be declared in the new scope as well.
    arguments_to_declare = []
    launch_configurations = {}
    for name, arg_value in launch_arguments.items():

        if isinstance(arg_value, DeclareLaunchArgument):
            # Convert to LaunchConfiguration
            launch_configurations[name] = LaunchConfiguration(arg_value.name)

            # If remapped redeclare the argument
            if arg_value.name != name:
                arguments_to_declare.append(arg_value)
        else:
            launch_configurations[name] = arg_value

    # In case the given launch configuration contain substitutions,
    # get the launch configs for these substitutions as well.
    updated_launch_configs = get_nested_launch_configurations(
        launch_configurations)

    # Create the included launch file
    launch_file = include_launch_py_description(
        pkg_name, paths,
        launch_arguments=updated_launch_configs.items(),
        **kwargs)

    actions = []

    # Add environment variables
    actions.extend(env_vars)
    # If a declared launch argument is remapped it has to be declared in the new scope as well.
    actions.extend(arguments_to_declare)
    # Add the launch file
    actions.append(launch_file)

    scoped_launch_file = GroupAction(actions,
                                     forwarding=False,
                                     condition=condition,
                                     launch_configurations=updated_launch_configs)

    return scoped_launch_file


def get_nested_launch_configurations(configuration_list: Dict):

    nested_launch_configs = {}
    nested_launch_configs = nested_launch_configs | configuration_list

    for config_value in configuration_list.values():
        if not hasattr(config_value, 'substitutions'):
            continue

        substitutions = copy.deepcopy(config_value.substitutions)
        while substitutions:
            sub = substitutions.pop()
            if isinstance(sub, LaunchConfiguration):
                nested_launch_configs = {
                    sub.variable_name[0].text: sub} | nested_launch_configs

            if hasattr(sub, 'expression'):
                substitutions.extend(sub.expression)

    return nested_launch_configs
