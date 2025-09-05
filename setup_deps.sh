#!/bin/bash
set -e

# Create ThirdParty.repos for the current ROS2 distribtution
if [ "$ROS_DISTRO" = "humble" ]; then
  cp ThirdParty.humble.repos ThirdParty.repos
else
  sed "s/\$ROS_DISTRO/$ROS_DISTRO/g" ThirdParty.template.repos > ThirdParty.repos
fi

# Import ThirdParty repos
vcs import . < ThirdParty.repos

# Install dependencies
sudo apt-get update
rosdep update --rosdistro=$ROS_DISTRO
rosdep install --from-paths . --ignore-src -r -y --rosdistro=$ROS_DISTRO