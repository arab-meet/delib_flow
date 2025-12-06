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

# Install Python requirements for YOLO into an isolated venv to avoid touching system packages
YOLO_VENV="${YOLO_VENV:-ThirdParty/yolo_ros/.venv}"
if [ ! -d "$YOLO_VENV" ]; then
  python3 -m venv "$YOLO_VENV"
fi
# Install missing dependencies to resolve pip conflicts
"${YOLO_VENV}/bin/pip" install typeguard pydot jinja2 pyyaml setuptools
# Install YOLO requirements
echo "Installing YOLO requirements into venv at: $YOLO_VENV"
"${YOLO_VENV}/bin/pip" install -r ThirdParty/yolo_ros/requirements.txt
echo "YOLO venv ready at: $YOLO_VENV"