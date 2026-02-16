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

from collections.abc import Iterable
from typing import Text

from launch.launch_context import LaunchContext
from launch.some_substitutions_type import SomeSubstitutionsType
from launch.substitution import Substitution
from launch.utilities import (ensure_argument_type, normalize_to_list_of_substitutions,
                              perform_substitutions)


class LoadFile(Substitution):
    """The file_path may contain Substitutions, they are resolved and concatenated."""

    def __init__(self, file_path: SomeSubstitutionsType) -> None:
        """Create a LoadFile substitution."""
        super().__init__()

        ensure_argument_type(
            file_path,
            (str, Substitution, Iterable),
            'file_path',
            'LoadFile')

        self.file_path = normalize_to_list_of_substitutions(file_path)

    def describe(self) -> Text:
        """Return a description of this substitution as a string."""
        return 'LoadFile({})'.format(' + '.join([sub.describe() for sub in self.file_path]))

    def perform(self, context: LaunchContext) -> Text:
        """Perform the substitution by loading the file."""
        with open(str(perform_substitutions(context, self.file_path)), 'r') as f:
            return f.read()
