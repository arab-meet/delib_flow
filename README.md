# Bt

[![ROS2](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml)

> [!WARNING]
> This is an experimental, work-in-progress repository!

## Build

```bash
mkdir -p ~/bt_ws/src
cd ~/bt_ws/src
git clone https://github.com/arab-meet/delib_flow.git
./setup_third_party_pkgs.sh
cd ~/bt_ws
colcon build --symlink-install
```

## Start Demos

Bringup simulation, nav2 and moveit2

```bash
ros2 launch tiago_demos tiago_bringup.launch.py world:=minimal_world
```

You can find worlds under `delib_flow/tiago_sim/worlds`

Run demo

```bash
ros2 launch tiago_demos tiago_demo.launch.py tree:=pick_object_example
```

You can find behavior trees under `delib_flow/tiago_demos/trees`
