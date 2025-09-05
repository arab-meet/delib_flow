#!/bin/bash
set -e

# Create ThirdParty.repos for the current ROS2 distribtution
DISTRO=$ROS_DISTRO
if [ "$DISTRO" = "humble" ]; then
  DISTRO="humble-devel"
fi
sed "s/\$ROS_DISTRO/$DISTRO/g" ThirdParty.template.repos > ThirdParty.repos

# Import ThirdParty repos
vcs import . < ThirdParty.repos

# Install dependencies
sudo apt-get update
rosdep update --rosdistro=$ROS_DISTRO
rosdep install --from-paths . --ignore-src -r -y --rosdistro=$ROS_DISTRO