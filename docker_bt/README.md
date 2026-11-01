# Docker setup for DelibFlow

`delibflow-ws:jazzy` holds ROS 2 Jazzy, Gazebo Harmonic, Nav2, MoveIt 2 and
every rosdep DelibFlow's packages need. The repository itself is mounted at run
time, so building the image needs no GitHub credentials.

This is the easiest way to build on a machine where you cannot install system
packages: a native build needs `sudo` for `rosdep install`.

## Build the image

```bash
cd docker_bt
make build
```

## Build the workspace

Import the third-party packages on the host first, since the repository is
mounted:

```bash
sed "s/\$ROS_DISTRO/jazzy/g" ThirdParty/ThirdParty.template.repos \
  > ThirdParty/ThirdParty.repos
vcs import . < ThirdParty/ThirdParty.repos
```

Then, from `docker_bt/`:

```bash
./run_container.sh bash -c "cd /bt_ws && colcon build --symlink-install"
```

## Run the demo on a machine with no display

Terminal 1:

```bash
./run_container.sh bash -c "source /bt_ws/install/setup.bash && \
  ros2 launch tiago_demos tiago_bringup.launch.py headless:=True"
```

Terminal 2, about a minute later, once the controllers are active:

```bash
docker exec -it -u $(id -u) -e HOME=/home/bt_user \
  delibflow-dev bash
source /bt_ws/install/setup.bash
ros2 launch tiago_demos tiago_demo.launch.py
```

Use `docker exec -u $(id -u)` as shown. A shell running as a different user
cannot see ROS nodes properly, because Fast DDS shared memory is per user.

## Commands

```bash
make build    # build the image
make run      # interactive container
make bash     # another shell in the running container
make stop     # stop the container
make clean    # remove the image
```
