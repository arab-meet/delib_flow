#!/bin/bash
# Run a command in the DelibFlow image with the workspace mounted, isolated on a bridge network.
# usage: dk.sh <container-suffix> <command...>
name="delibflow-$1"; shift
mkdir -p ~/bt_ws/docker_ws/{build,install,log} ~/bt_ws/docker_ws/home
# Each container gets its own network: on a shared bridge, DDS discovery crosses containers.
docker network create "$name-net" >/dev/null 2>&1
exec docker run --rm --name "$name" --network "$name-net" --init --gpus all --runtime nvidia \
  -e NVIDIA_DRIVER_CAPABILITIES=all -e LOCAL_USER_ID=$(id -u) \
  -e ROS_DOMAIN_ID=25 -e GZ_PARTITION=delibflow -e RCUTILS_COLORIZED_OUTPUT=0 \
  -e ROS_LOG_DIR=/bt_ws/log/ros -e PYTHONUNBUFFERED=1 -e RCUTILS_LOGGING_BUFFERED_STREAM=0 \
  -v ~/bt_ws/src:/bt_ws/src -v ~/bt_ws/docker_ws/build:/bt_ws/build -v ~/bt_ws/docker_ws/install:/bt_ws/install -v ~/bt_ws/docker_ws/log:/bt_ws/log \
  -v ~/bt_ws/experiments:/bt_ws/experiments \
  delibflow-ws:jazzy bash -c "$*"
