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

import copy
import tempfile
import re
import yaml

from typing import Dict, List, Text
from ament_index_python.packages import get_package_share_directory


def _merge_dictionaries(dict1, dict2):
    """
    Recursive merge dictionaries.

    :param dict1: Base dictionary to merge.
    :param dict2: Dictionary to merge on top of base dictionary.
    :return: Merged dictionary
    """
    for key, val in dict1.items():
        if isinstance(val, dict):
            dict2_node = dict2.setdefault(key, {})
            _merge_dictionaries(val, dict2_node)
        else:
            if key not in dict2:
                dict2[key] = val

    return dict2


def insert_ros_param_prefix(data, prefix):
    if type(data) != dict:
        return data

    for k in data.keys():
        if k == "ros__parameters":
            d = {}
            d[prefix] = copy.deepcopy(data[k])
            data[k] = d
        else:
            data[k] = insert_ros_param_prefix(data[k], prefix)
    return data


def merge_param_files(yaml_files):
    """
    Merge multiple param yaml files.

    Substitution in ROS2 launch can only return a string. The way to combine multiple parameter
    files is to create a single temporary file and return the path to it, this path is passed as
    the "parameters" argument of a Node

    yaml_files is a list of either paths to yaml files or pairs of two strings (path, prefix),
    so the file is loaded inside the provided prefix, inside the ros__parameters field
    """
    concatenated_dict = {}
    for e in yaml_files:
        if type(e) == str:
            yaml_file = e
            prefix = None
        else:
            yaml_file = e[0]
            prefix = e[1]
        data = yaml.safe_load(open(yaml_file, "r"))
        if prefix:
            data = insert_ros_param_prefix(data, prefix)

        _merge_dictionaries(concatenated_dict, data)
        # Second arg takes precedence on merge, and result is stored there
        concatenated_dict = data
    rewritten_yaml = tempfile.NamedTemporaryFile(mode="w", delete=False)
    yaml.dump(concatenated_dict, rewritten_yaml)
    rewritten_yaml.close()
    return rewritten_yaml.name


def _parse_config(path, param_rewrites):
    """
    Load a yaml configuration file and resolve any variables.

    It allows to get the share directory of a package too.

    The variables must be in this format to be parsed:
    ${VAR_NAME}.
    E.g.:
    host: ${HOST}
    The pkg name must be in this format to be parsed:
    ${find PKG_NAME}.
    E.g.:
    pkg_path:${find PKG_NAME}

    Parameters
    ----------
    path : Text
        The path to the yaml file.
    param_rewrites : Dict
        Substitutions parameters.

    Returns
    -------
    __var__ : Dict
        The dict configuration.

    """
    # pattern for global vars: look for ${word}
    pattern_vars = re.compile(r'\$\{(\w+)\}')

    # Pattern to find package paths: look for ${find PKG_NAME}
    pattern_pkg = re.compile(r'\$\{find ([a-zA-Z0-9_]+)\}')

    # read the YAML file
    with open(path, 'r') as file:
        content = file.read()

    # Replace all matches of the pattern with their corresponding values from param_rewrites
    def replace_variables(match):
        var_name = match.group(1)
        # Check if the variable exists in the substitution dictionary
        if var_name in param_rewrites:
            return str(param_rewrites[var_name])
        else:
            raise ValueError(
                f"Variable {var_name} not defined in param_rewrites.")

    content = pattern_vars.sub(replace_variables, content)

    # Replace all occurrences of the package pattern with the full path of the package
    def replace_pkg_path(match):
        pkg_name = match.group(1)
        pkg_path = get_package_share_directory(pkg_name)
        # Assuming pkg_path is not empty if the path exists
        if pkg_path:
            return pkg_path
        else:
            raise ValueError(f"Package path {pkg_name} not found.")

    content = pattern_pkg.sub(replace_pkg_path, content)

    return yaml.safe_load(content)


def parse_parametric_yaml(source_files: List[Text], param_rewrites: Dict):
    """
    Parse a list of Parametric YAML files into a single one.

    Substitutes parameters into several different YAML files in the form

    parameter_node:
        ros__parameters:
            parameter_name: ${PARAMETER_VALUE}

    by taking the value of the ${PARAMETER_VALUE} variable from the
    param_rewrites Dictionary

    Parameters
    ----------
    source_files : List[Text]
        List of paths of Parametric YAML files.
    param_rewrites : Dict
        Dictionary with the name and the value of
        each variable.

    Returns
    -------
        rewritten_yaml: Text
        Path to the Full YAML file containing all the parameters.

    """
    rewritten_yaml = tempfile.NamedTemporaryFile(mode="w", delete=False)
    full_yaml = {}

    for source_file in source_files:
        data = _parse_config(source_file, param_rewrites)
        full_yaml.update(data)

    yaml.dump(full_yaml, rewritten_yaml)
    rewritten_yaml.close()
    return rewritten_yaml.name
