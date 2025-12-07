# Bt

[![ROS2](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml/badge.svg)](https://github.com/arab-meet/Bt/actions/workflows/ros2.yaml)

> [!WARNING]
> This is an experimental, work-in-progress repository!

## Tiago simulation Setup

1. Create a workspace

    ```bash
    mkdir -p ~/bt_ws/src
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
    ros2 launch tiago_sim tiago_sim.launch.py
    ```

5. Running aruco_detection ( and broadcasting )

    ```sh
    ros2 launch tiago_aruco_broadcast aruco.launch.py
    ```
