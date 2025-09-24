# Bt

[![ROS2](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml)

## Documentation

Check `docs/README.md` for instructions

## Tiago simulation Setup

1. Create a workspace

    ```bash
    mkdir ~/bt_ws/src
    ```

2. Setup dependencies

    ```bash
    cd ~/bt_ws/src
    ./setup_third_party_pkgs.sh
    ```

3. Build workspace

    ```bash
    cd ~/bt_ws
    colcon build --symlink-install
    ```

4. Running simulation

    ```bash
    ros2 launch tiago_sim sim.launch.py
    ```

5. Create a map

    ```sh
    ros2 launch tiago_slam tiago_slam_toolbox.launch.py
    ```

6. Start navigation (Nav2)

    ```sh
    ros2 launch tiago_nav tiago_nav2.launch.py
