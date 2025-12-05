#
# ROS 2 Jazzy with Gazebo Harmonic development environment
#

FROM osrf/ros:jazzy-desktop-full

#
# Environment setup
#
ENV DEBIAN_FRONTEND=noninteractive
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8
ENV ROS_DISTRO=jazzy

#
# Install core tools and dependencies
#
RUN apt-get update && apt-get install -y \
		git \
		curl \
		software-properties-common \
		build-essential \
		cmake \
		pkg-config \
		python3-dev \
		python3-pip \
		python3-colcon-common-extensions \
		python3-vcstool \
		python3-rosinstall-generator \
		python3-osrf-pycommon \
		bash-completion \
		wget \
		lsb-release \
		ca-certificates \
		gnupg \
		gosu \
		tzdata \
	&& apt-get clean autoclean \
	&& rm -rf /var/lib/apt/lists/{apt,dpkg,cache,log} /tmp/* /var/tmp/*

#
# Install Gazebo Harmonic from binaries
#
RUN curl -sSL https://packages.osrfoundation.org/gazebo.gpg -o /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg && \
	echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] https://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null && \
	apt-get update && \
	(apt-get install -y gz-harmonic 2>/dev/null || \
	 apt-get install -y \
		gz-sim7 \
		gz-transport12 \
		gz-math7 \
		gz-cmake3 \
		libgz-sim7-dev \
		libgz-transport12-dev \
		libgz-math7-dev \
		libgz-cmake3-dev) && \
	apt-get clean autoclean && \
	rm -rf /var/lib/apt/lists/{apt,dpkg,cache,log} /tmp/* /var/tmp/*

#
# Install MoveIt
#
RUN apt-get update && apt-get install -y \
		ros-jazzy-moveit \
	&& apt-get clean autoclean \
	&& rm -rf /var/lib/apt/lists/{apt,dpkg,cache,log} /tmp/* /var/tmp/*

#
# Create workspace structure
#
RUN mkdir -p /bt_ws/src
WORKDIR /bt_ws

#
# Clone repository
#
ARG REPO_URL=https://github.com/arab-meet/Bt
ARG REPO_BRANCH=main
ARG GIT_USER
ARG GIT_TOKEN

RUN git clone --branch ${REPO_BRANCH} https://${GIT_USER}:${GIT_TOKEN}@github.com/arab-meet/Bt /bt_ws/src/Bt

#
# Initialize rosdep
#
RUN rosdep init || true && \
	rosdep update --rosdistro jazzy

#
# Setup third-party dependencies
#
WORKDIR /bt_ws/src/Bt
RUN chmod +x setup_third_party_pkgs.sh && \
	bash -c "source /opt/ros/jazzy/setup.bash && \
		export ROS_DISTRO=jazzy && \
		./setup_third_party_pkgs.sh" && \
	# Fix Git ownership issues - mark all ThirdParty directories as safe
	git config --global --add safe.directory '*' || true

#
# Build workspace with colcon
#
WORKDIR /bt_ws
RUN bash -c "source /opt/ros/jazzy/setup.bash && \
	export ROS_DISTRO=jazzy && \
	colcon build --symlink-install"

#
# Create user for development (use existing user if UID 1000 exists, otherwise create new)
#
RUN if id -u 1000 >/dev/null 2>&1; then \
		EXISTING_USER=$(id -nu 1000); \
		usermod -aG sudo $EXISTING_USER || true; \
		echo "$EXISTING_USER:$EXISTING_USER" | chpasswd; \
	else \
		useradd --shell /bin/bash -u 1000 -c "" -m bt_user && \
		echo "bt_user:bt_user" | chpasswd && \
		adduser bt_user sudo; \
	fi

#
# Change ownership of workspace to the user
#
RUN chown -R 1000:1000 /bt_ws

#
# Setup environment for user
#
RUN if id -u 1000 >/dev/null 2>&1; then \
		EXISTING_USER=$(id -nu 1000); \
		USER_HOME=$(eval echo ~$EXISTING_USER); \
		echo "source /opt/ros/jazzy/setup.bash" >> $USER_HOME/.bashrc && \
		echo "if [ -f /bt_ws/install/setup.bash ]; then source /bt_ws/install/setup.bash; fi" >> $USER_HOME/.bashrc && \
		sudo -u $EXISTING_USER git config --global --add safe.directory '*' || true; \
	else \
		echo "source /opt/ros/jazzy/setup.bash" >> /home/bt_user/.bashrc && \
		echo "if [ -f /bt_ws/install/setup.bash ]; then source /bt_ws/install/setup.bash; fi" >> /home/bt_user/.bashrc && \
		sudo -u bt_user git config --global --add safe.directory '*' || true; \
	fi

#
# GUI support for Gazebo - Install MESA software rendering
#
RUN apt-get update && \
	apt-get install -y --no-install-recommends \
		mesa-utils \
		libgl1 \
		libgl1-mesa-dri \
		libglu1-mesa \
		xvfb \
		x11vnc \
	&& apt-get clean autoclean && \
	rm -rf /var/lib/apt/lists/{apt,dpkg,cache,log} /tmp/* /var/tmp/*

ENV QT_X11_NO_MITSHM=1
ENV GALLIUM_DRIVER=llvmpipe
ENV MESA_GL_VERSION_OVERRIDE=3.3
ENV __GLX_VENDOR_LIBRARY_NAME=mesa
ENV GZ_SIM_SYSTEM_PLUGIN_PATH=/usr/lib/x86_64-linux-gnu/gz-sim-7/plugins
ENV GZ_SIM_RENDER_ENGINE=ogre2
ENV GZ_SIM_RENDER_ENGINE_SERVICE=ogre2

#
# Copy entrypoint script
#
COPY scripts/entrypoint.sh /usr/local/bin/entrypoint.sh
RUN chmod +x /usr/local/bin/entrypoint.sh
ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]

#
# Create shared volume directory
#
RUN mkdir -p /shared_bt && \
	if id -u 1000 >/dev/null 2>&1; then \
		chown -R 1000:1000 /shared_bt; \
	else \
		chown -R bt_user:bt_user /shared_bt; \
	fi

WORKDIR /bt_ws

CMD ["/bin/bash"]

