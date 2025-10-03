#!/bin/bash
set -e

# Detect Gazebo type
if command -v gz >/dev/null 2>&1 && gz help sim >/dev/null 2>&1; then
    GZ_TYPE="sim"
elif command -v gazebo >/dev/null 2>&1; then
  GZ_TYPE="classic"
else
  GZ_TYPE="classic"
fi

echo "Detected ROS_DISTRO=$ROS_DISTRO, Gazebo=$GZ_TYPE"

# Create ThirdParty.repos for the current ROS2 distribution
if [ "$ROS_DISTRO" = "humble" ]; then
  if [ "$GZ_TYPE" = "sim" ]; then
    echo "Using Humble + Gazebo Sim repos"
    cp ThirdParty/ThirdParty.humble.gz_sim.repos ThirdParty/ThirdParty.repos
  elif [ "$GZ_TYPE" = "classic" ]; then
    echo "Using Humble + Gazebo Classic repos"
    cp ThirdParty/ThirdParty.humble.gazebo_classic.repos ThirdParty/ThirdParty.repos
  else
    cp ThirdParty/ThirdParty.humble.gazebo_classic.repos ThirdParty/ThirdParty.repos
  fi
else
  echo "👉 Using template repos for $ROS_DISTRO"
  sed "s/\$ROS_DISTRO/$ROS_DISTRO/g" ThirdParty/ThirdParty.template.repos > ThirdParty/ThirdParty.repos
fi

# Import ThirdParty repos
vcs import . < ThirdParty/ThirdParty.repos

# Install dependencies
sudo apt-get update
rosdep update --rosdistro=$ROS_DISTRO
rosdep install --from-paths . --ignore-src -r -y --rosdistro=$ROS_DISTRO
