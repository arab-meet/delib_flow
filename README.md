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

5. Create a map

    ```bash
    ros2 launch tiago_slam tiago_slam_toolbox.launch.py
    ```

6. Start navigation (Nav2)

    ```bash
    ros2 launch tiago_nav tiago_nav2.launch.py

<<<<<<< HEAD
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

7. Running aruco recognition

    ```sh
    ros2 launch ros2_aruco aruco_recognition.launch.py
    ```

8. Broadcasting aruco_frame in tf

    ```sh
    ros2 run tiago_aruco_broadcast aruco_broadcast

>>>>>>> 060c648 (Add ArUco marker detector (#36))
