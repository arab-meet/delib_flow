#
# ROS 2 Jazzy, Gazebo Harmonic, Nav2 and MoveIt 2, with every dependency DelibFlow needs.
#
# The image holds dependencies only. The workspace is mounted at run time, so no
# GitHub credentials are needed and nothing private ends up in an image layer.
# Build from the repository root (the Makefile does this):
#   docker build -f docker_bt/Dockerfile -t delibflow-ws:jazzy .
#
FROM osrf/ros:jazzy-desktop-full

ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8
ENV ROS_DISTRO=jazzy

RUN apt-get update && apt-get install -y --no-install-recommends \
		python3-vcstool \
		python3-colcon-common-extensions \
		git \
		git-lfs \
		gosu \
		xvfb \
		ros-jazzy-moveit \
		ros-jazzy-navigation2 \
		ros-jazzy-nav2-bringup \
	&& rm -rf /var/lib/apt/lists/*

#
# Resolve dependencies the same way setup_thirdparty.sh does, against a throwaway
# copy of the third-party sources. -r keeps going past the few keys rosdep has no
# rule for on Jazzy (Gazebo Classic and Isaac Sim helpers that DelibFlow does not use).
#
COPY ThirdParty/ThirdParty.template.repos /tmp/deps/ThirdParty.template.repos
COPY . /tmp/deps/delib_flow
RUN cd /tmp/deps \
	&& sed "s/\$ROS_DISTRO/$ROS_DISTRO/g" ThirdParty.template.repos > ThirdParty.repos \
	&& mkdir -p src && vcs import src < ThirdParty.repos \
	&& apt-get update \
	&& rosdep update --rosdistro=$ROS_DISTRO \
	&& rosdep install --from-paths src delib_flow --ignore-src -r -y --rosdistro=$ROS_DISTRO \
	&& cd / && rm -rf /tmp/deps /var/lib/apt/lists/*

#
# Ubuntu 24.04's python3-opencv (4.6) lacks cv2.aruco.ArucoDetector, which ros2_aruco
# needs (issue #54). Keep Ubuntu's numpy so cv_bridge keeps working.
#
RUN apt-get update && apt-get install -y --no-install-recommends python3-pip \
	&& pip3 install --break-system-packages --no-deps opencv-contrib-python==4.9.0.80 \
	&& rm -rf /var/lib/apt/lists/*

RUN mkdir -p /bt_ws/src

COPY docker_bt/scripts/entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh
ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]

WORKDIR /bt_ws
CMD ["/bin/bash"]
