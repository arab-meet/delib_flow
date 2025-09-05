# Bt

[![ROS2](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml)

## Tiago simulation Setup

1. Create a workspace

```bash
mkdir ~/bt_ws/src
```

2. Setup dependencies

```bash
cd ~/bt_ws/src
./setup_deps.sh
```

3. Build workspace

```bash
cd ~/bt_ws
colcon build --symlink-install
```

3. running simulation

```bash
ros2 launch tiago_sim sim.launch.py
```

