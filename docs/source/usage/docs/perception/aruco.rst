.. _aruco:

ArUco Markers
=============

DelibFlow uses ArUco markers to give TiAGo a visual anchor point for object grasping.
The ``tiago_aruco_broadcast`` package ties together marker detection and TF publishing
so that behavior tree nodes can get the object's pose directly from the TF tree.

Launch everything at once
--------------------------

The easiest way to get ArUco detection running is through the bringup launch file,
which starts it automatically:

.. code-block:: bash

   ros2 launch tiago_demos tiago_bringup.launch.py

If you need to run it standalone:

.. code-block:: bash

   ros2 launch tiago_aruco_broadcast aruco.launch.py

There are two nodes involved, each doing a different job.

ArUco Recognition Node
-----------------------

This node reads the camera feed and detects markers in the image.

.. code-block:: bash

   ros2 run ros2_aruco aruco_node

Topics subscribed
~~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - ROS Topic
     - Interface
     - Description
   * - ``/camera/image_raw``
     - `sensor_msgs/msg/Image <https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html>`_
     - Raw image from the robot's camera
   * - ``/camera/camera_info``
     - `sensor_msgs/msg/CameraInfo <https://docs.ros2.org/latest/api/sensor_msgs/msg/CameraInfo.html>`_
     - Camera intrinsics and extrinsics (needed for pose estimation)

Topics published
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - ROS Topic
     - Interface
     - Description
   * - ``/aruco_markers``
     - `ros2_aruco_interfaces/msg/ArucoMarkers <https://github.com/JMU-ROBOTICS-VIVA/ros2_aruco/tree/main/ros2_aruco_interfaces>`_
     - Array of detected marker poses with their IDs
   * - ``/aruco_poses``
     - `geometry_msgs/msg/PoseArray <https://docs.ros.org/en/noetic/api/geometry_msgs/html/msg/PoseArray.html>`_
     - All detected poses in a single message, handy for RViz visualization

Parameters
~~~~~~~~~~

.. list-table::
   :widths: 30 20 50
   :header-rows: 1

   * - Parameter
     - Default
     - Description
   * - ``marker_size``
     - ``0.0625``
     - Physical size of the marker in meters
   * - ``aruco_dictionary_id``
     - ``DICT_5X5_250``
     - ArUco dictionary used to generate the markers
   * - ``image_topic``
     - ``/camera/image_raw``
     - Image topic to subscribe to
   * - ``camera_info_topic``
     - ``/camera/camera_info``
     - Camera info topic to subscribe to
   * - ``camera_frame``
     - (empty)
     - Camera optical frame name

ArUco TF Broadcast Node
------------------------

This node takes the detected marker poses and broadcasts them as TF transforms. This is
what allows behavior tree nodes to look up the object's position in the ``map`` or
``base_link`` frame.

.. code-block:: bash

   ros2 run tiago_aruco_broadcast aruco_broadcast

Topics subscribed
~~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - ROS Topic
     - Interface
     - Description
   * - ``/aruco_markers``
     - `ros2_aruco_interfaces/msg/ArucoMarkers <https://github.com/JMU-ROBOTICS-VIVA/ros2_aruco/tree/main/ros2_aruco_interfaces>`_
     - Detected marker poses coming from the recognition node

Topics published
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - ROS Topic
     - Interface
     - Description
   * - ``/tf``
     - `tf2_msgs/msg/TFMessage <https://docs.ros2.org/foxy/api/tf2_msgs/msg/TFMessage.html>`_
     - Transform from the camera frame to each detected marker

How it all fits together
-------------------------

The recognition node detects markers and publishes their poses. The broadcast node
takes those poses and puts them into the TF tree. The behavior tree node
``tiago_set_target_using_aruco_marker`` then reads the TF transform for the target
marker and sets the grasp goal on the blackboard. This is the pipeline that the
``pick_object_example`` demo uses.
