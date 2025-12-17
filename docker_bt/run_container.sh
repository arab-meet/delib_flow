#!/bin/bash
# Runs a docker container for ROS 2 Jazzy + Gazebo Harmonic development environment
# Requires:
#   - docker
#   - an X server (for GUI/Gazebo)
# Optional:
#   - device mounting such as: joystick mounted to /dev/input/js0

DOCKER_REPO="bt_ros2_jazzy"
CONTAINER_NAME="bt_ros2_jazzy_container"
SHARED_DIR="$HOME/shared_bt"
CMD=""

# Create shared directory if it doesn't exist
if [ ! -d "$SHARED_DIR" ]; then
    mkdir -p "$SHARED_DIR"
    echo "Created shared directory: $SHARED_DIR"
fi

# Initialize workspace in shared folder if it doesn't exist
if [ ! -d "$SHARED_DIR/bt_ws" ] || [ -z "$(ls -A $SHARED_DIR/bt_ws/src 2>/dev/null)" ]; then
    echo "Initializing workspace in shared directory..."
    # Check if container exists and copy workspace from it
    if [ "$(docker ps -aq -f name=${CONTAINER_NAME})" ]; then
        echo "Copying workspace from existing container..."
        docker cp ${CONTAINER_NAME}:/bt_ws "$SHARED_DIR/" 2>/dev/null || true
    elif [ "$(docker images -q ${DOCKER_REPO}:latest 2>/dev/null)" ]; then
        # Image exists but container doesn't - create temp container to copy workspace
        echo "Copying workspace from image..."
        TEMP_CONTAINER="${CONTAINER_NAME}_temp_init"
        docker create --name ${TEMP_CONTAINER} ${DOCKER_REPO}:latest > /dev/null 2>&1
        docker cp ${TEMP_CONTAINER}:/bt_ws "$SHARED_DIR/" 2>/dev/null || true
        docker rm ${TEMP_CONTAINER} > /dev/null 2>&1
        if [ -d "$SHARED_DIR/bt_ws/src" ] && [ -n "$(ls -A $SHARED_DIR/bt_ws/src 2>/dev/null)" ]; then
            echo "Workspace source initialized successfully"
            # Check if install directory exists (workspace was built)
            if [ -d "$SHARED_DIR/bt_ws/install" ]; then
                echo "Workspace build artifacts found"
            else
                echo "Note: Workspace source copied but not built. Run 'colcon build' inside container."
            fi
        else
            echo "Warning: Could not initialize workspace. It will be created on first build."
            mkdir -p "$SHARED_DIR/bt_ws/src"
        fi
    else
        # No image yet - create directory structure
        mkdir -p "$SHARED_DIR/bt_ws/src"
        echo "Created workspace directory structure. Workspace will be populated after image build."
    fi
fi

# Setup X11 forwarding for GUI applications
XAUTH=/tmp/.docker.xauth
xauth_list=$(xauth nlist :0 | sed -e 's/^..../ffff/')
if [ ! -f $XAUTH ]; then
    echo "XAUTH file does not exist. Creating one..."
    touch $XAUTH
    chmod a+r $XAUTH
    if [ ! -z "$xauth_list" ]; then
        echo $xauth_list | xauth -f $XAUTH nmerge -
    fi
fi

# Prevent executing "docker run" when xauth failed
if [ ! -f $XAUTH ]; then
    echo "[$XAUTH] was not properly created. Exiting..."
    exit 1
fi

echo "Shared directory: $SHARED_DIR"

# Allow X11 connections (not recommended for production, but needed for GUI)
xhost +local:root

echo "Starting Container: ${CONTAINER_NAME} with REPO: $DOCKER_REPO"

# Setup command to source environment and start bash
CMD="source /opt/ros/jazzy/setup.bash && \
    if [ -f /bt_ws/install/setup.bash ]; then source /bt_ws/install/setup.bash; fi && \
    /bin/bash"

# Check if container already exists
if [ "$(docker ps -aq -f name=${CONTAINER_NAME})" ]; then
    if [ "$(docker ps -aq -f status=exited -f name=${CONTAINER_NAME})" ]; then
        echo "Restarting the container..."
        docker start ${CONTAINER_NAME}
    fi
    docker exec -it ${CONTAINER_NAME} env TERM=xterm-256color bash -c "${CMD}"
else
    echo "Running new container ${CONTAINER_NAME}..."

    docker run -it \
        --network host \
        --env="DISPLAY=${DISPLAY}" \
        --env="QT_X11_NO_MITSHM=1" \
        --env="GALLIUM_DRIVER=llvmpipe" \
        --env="MESA_GL_VERSION_OVERRIDE=3.3" \
        --env="__GLX_VENDOR_LIBRARY_NAME=mesa" \
        --env="GZ_SIM_RENDER_ENGINE=ogre2" \
        --env="GZ_SIM_RENDER_ENGINE_SERVICE=ogre2" \
        -e LOCAL_USER_ID="$(id -u)" \
        --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw" \
        --volume="$XAUTH:$XAUTH" \
        --env="XAUTHORITY=$XAUTH" \
        --volume="/etc/localtime:/etc/localtime:ro" \
        --volume="$SHARED_DIR:/shared_bt:rw" \
        --volume="$SHARED_DIR/bt_ws:/bt_ws:rw" \
        --volume="/dev:/dev" \
        --name=${CONTAINER_NAME} \
        --privileged \
        --workdir /bt_ws \
        ${DOCKER_REPO}:latest \
        bash -c "${CMD}"
fi
