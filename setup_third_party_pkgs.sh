#!/bin/bash
set -e

# Create ThirdParty.repos for the current ROS2 distributions
if [ "$ROS_DISTRO" = "humble" ]; then
  cp ThirdParty/ThirdParty.humble.repos ThirdParty/ThirdParty.repos
else
  sed "s/\$ROS_DISTRO/$ROS_DISTRO/g" ThirdParty/ThirdParty.template.repos > ThirdParty/ThirdParty.repos
fi

# Import ThirdParty repos
vcs import . < ThirdParty/ThirdParty.repos

# Install dependencies
sudo apt-get update
rosdep update --rosdistro=$ROS_DISTRO
rosdep install --from-paths . --ignore-src -r -y --rosdistro=$ROS_DISTRO

# Install Python requirements for YOLO
pip3 install -r ThirdParty/yolo_ros/requirements.txt --break-system-packages
