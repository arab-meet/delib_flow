<!-- Heading from H1 to H6 -->

# **Object Detection With Aruco Markers**

## **Usage**

```bash
ros2 launch tiago_aruco_broadcast aruco launch.py
```

## **Aruco Recognition Node**

### **Usage 1**

```bash
ros2 run ros2_aruco aruco_node
```

### **Topics Subscribed 1**

| ROS Topic | Interface | Description |
| --------- | --------- | ----------- |
|camera/image_raw|[sensor_msgs/msg/Image](https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html)| Raw image data captured by camera |
|camera/camera_info|[sensor_msgs/msg/CameraInfo](https://docs.ros2.org/latest/api/sensor_msgs/msg/CameraInfo.html)| Intrinsic (focal length, principal point, distortion coefficients) and Extrinsic (camera pose) information related to the camera |

### **Topics Published 1**

| ROS Topic | Interface | Description |
| --------- | --------- | ----------- |
|aruco_markers|[ros2_aruco_interfaces/msg/ArucoMarkers](https://github.com/JMU-ROBOTICS-VIVA/ros2_aruco/tree/main/ros2_aruco_interfaces)|  Provides an array of all poses along with the corresponding marker ids |
|aruco_poses|[geometry_msgs/msg/PoseArray](https://docs.ros.org/en/noetic/api/geometry_msgs/html/msg/PoseArray.html)| Poses of all detected markers (suitable for rviz visualization) |

### Parameters

* marker_size - size of the markers in meters (default .0625)
* aruco_dictionary_id - dictionary that was used to generate markers (default DICT_5X5_250)
* image_topic - image topic to subscribe to (default /camera/image_raw)
* camera_info_topic - Camera info topic to subscribe to (default /camera/camera_info)
* camera_frame - Camera optical frame to use.

___

## **Aruco TF Broadcast Node**

### **Usage 2**

```bash
ros2 run tiago_aruco_broadcast aruco_broadcast
```

### **Topics Subscribed 2**

| ROS Topic | Interface | Description |
| --------- | --------- | ----------- |
|aruco_markers|[ros2_aruco_interfaces/msg/ArucoMarkers](https://github.com/JMU-ROBOTICS-VIVA/ros2_aruco/tree/main/ros2_aruco_interfaces)| Provides an array of all poses along with the corresponding marker ids |

### **Topics Published 2**

| ROS Topic | Interface | Description |
| --------- | --------- | ----------- |
|tf|[tf2_msgs/msg/TFMessage](https://docs.ros2.org/foxy/api/tf2_msgs/msg/TFMessage.html)| Describe transformations (translation and rotation) between robot coordinate frames |
