#!/bin/bash
# Start the DelibFlow container with this repository mounted at /bt_ws/src/delib_flow.
# Build, install and log trees stay in ~/delibflow_docker_ws on the host.
#   ./run_container.sh                    interactive shell
#   ./run_container.sh colcon build ...   run one command
# Uses the NVIDIA runtime when available; Gazebo cameras need EGL rendering.
# Set ROS_DOMAIN_ID and GZ_PARTITION in the host shell to share a machine safely.

REPO_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
WS_DIR="${DELIBFLOW_WS:-$HOME/delibflow_docker_ws}"
mkdir -p "$WS_DIR"/{build,install,log}

GPU_ARGS=()
if docker info 2>/dev/null | grep -q 'Runtimes:.*nvidia'; then
    GPU_ARGS=(--gpus all --runtime nvidia -e NVIDIA_DRIVER_CAPABILITIES=all)
fi

GUI_ARGS=()
if [ -n "$DISPLAY" ]; then
    GUI_ARGS=(-e DISPLAY="$DISPLAY" -e QT_X11_NO_MITSHM=1 -v /tmp/.X11-unix:/tmp/.X11-unix:rw)
fi

TTY_ARGS=()
[ -t 0 ] && TTY_ARGS=(-it)

exec docker run --rm "${TTY_ARGS[@]}" --init --name "${DELIBFLOW_CONTAINER:-delibflow-dev}" \
    "${GPU_ARGS[@]}" "${GUI_ARGS[@]}" \
    -e LOCAL_USER_ID="$(id -u)" \
    -e ROS_DOMAIN_ID="${ROS_DOMAIN_ID:-0}" -e GZ_PARTITION="${GZ_PARTITION:-delibflow}" \
    -v "$REPO_DIR":/bt_ws/src/delib_flow \
    -v "$WS_DIR/build":/bt_ws/build -v "$WS_DIR/install":/bt_ws/install -v "$WS_DIR/log":/bt_ws/log \
    delibflow-ws:jazzy "${@:-bash}"
