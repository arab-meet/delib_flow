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

import yaml
from typing import Dict
from launch_ros.descriptions import ComposableNode


def generate_component_list(yaml_file):

    components = []

    with open(yaml_file, "r") as composition_yaml:
        cfg: Dict = yaml.safe_load(composition_yaml)

        if "components" in cfg:
            for component in cfg["components"]:

                component_params = cfg["components"][component]
                component_pkg = component_params["package"]
                component_type = component_params["type"]
                ros_params = [component_params["ros__parameters"]]

                launchable_component = ComposableNode(
                    package=component_pkg,
                    plugin=f"{component_pkg}::{component_type}",
                    name=component,
                    parameters=ros_params,
                )

                components.append(launchable_component)

    return components
