# Bt

[![ROS2](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml)

## Tiago simulation Setup

1. Download the repos with the tiago simulated

```bash
cd ~/bt_ws/src/Bt
vcs import . < ThirdParty.repos
```

2. Try to install from packages as much dependencies as possible

```bash
cd ~/bt_ws
rosdep install --from-paths src --ignore-src -r -y
```
