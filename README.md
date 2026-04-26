# DelibFlow

[![ROS2 CI](https://github.com/arab-meet/delib_flow/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/delib_flow/actions/workflows/ros2.yaml)
[![Jazzy](https://img.shields.io/badge/ROS2-Jazzy-blue)](https://docs.ros.org/en/jazzy)
[![Kilted](https://img.shields.io/badge/ROS2-Kilted-blue)](https://docs.ros.org/en/kilted)
[![Docs](https://img.shields.io/badge/docs-readthedocs-green)](https://delib-flow.readthedocs.io/en/latest/)

A behavior tree framework for the TiAGo robot, built on top of
[BehaviorTree.CPP](https://github.com/BehaviorTree/BehaviorTree.CPP),
[Nav2](https://github.com/ros-navigation/navigation2) for navigation, and
[Grab2](https://github.com/elsayedelsheikh/grab2) for manipulation.

> **Full documentation:** [delib-flow.readthedocs.io](https://delib-flow.readthedocs.io/en/latest/)

---

## Quick Start

**1. Clone and build**

```bash
mkdir -p ~/bt_ws/src
cd ~/bt_ws/src
git clone https://github.com/arab-meet/delib_flow.git
cd delib_flow
./setup_third_party_pkgs.sh
cd ~/bt_ws
colcon build --symlink-install
source install/setup.bash
```

**2. Launch the simulation**

```bash
ros2 launch tiago_demos tiago_bringup.launch.py
```

**3. Run a demo**

```bash
ros2 launch tiago_demos tiago_demo.launch.py tree:=our_map_example
```

For a full walkthrough, available worlds, and all launch arguments, see the
[documentation](https://delib-flow.readthedocs.io/en/latest/).

---

## Supported Distributions

| Distribution | Ubuntu | Status |
|---|---|---|
| ROS 2 Jazzy | 24.04 | Supported |
| ROS 2 Kilted | 24.04 | Supported |
