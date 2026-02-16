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

from launch import Action
from launch.launch_context import LaunchContext
from launch.launch_description_entity import LaunchDescriptionEntity
from typing import Optional
from typing import List
from launch_pal.arg_utils import read_launch_argument
import os


class CheckPublicSim(Action):

    def execute(self, context: LaunchContext) -> Optional[List[LaunchDescriptionEntity]]:
        """Raise and exception if is_public sim is used incorrectly."""
        is_public_sim = read_launch_argument('is_public_sim', context)
        pal_distro_env = os.environ.get('PAL_DISTRO')
        if pal_distro_env is None and (is_public_sim == 'false' or is_public_sim == 'False'):
            raise Exception(
                'You are using the public simulation of PAL Robotics, '
                'make sure the launch argument is_public_sim is set to True'
            )
