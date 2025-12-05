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

5. Running aruco recognition

<<<<<<< HEAD
    ```bash
    ros2 launch tiago_slam tiago_slam_toolbox.launch.py
=======
    ```sh
    ros2 launch ros2_aruco aruco_recognition.launch.py
>>>>>>> 2efb961 (updated aruco)
    ```

6. Broadcasting aruco_frame in tf

<<<<<<< HEAD
    ```bash
    ros2 launch tiago_nav tiago_nav2.launch.py
    ```

7. Running aruco_detection ( and broadcasting )

    ```bash
    ros2 launch tiago_aruco_broadcast aruco.launch.py
    ```

8. YOLOv11 Test

   ```bash
   ros2 launch tiago_sim sim.launch.py
   ```

   ```bash
   rviz2
   ```
=======
    ```sh
    ros2 run tiago_aruco_broadcast aruco_broadcast
>>>>>>> 2efb961 (updated aruco)
