.. _perception_yolo:

Object Detection with YOLO
===========================

DelibFlow integrates `yolo_ros <https://github.com/mgonzs13/yolo_ros>`_ (v4.5.1) for
real-time object detection on TiAGo's head camera. It runs YOLOv11 by default, but the
underlying library supports a bunch of model variants (YOLOv5 through YOLOv12, YOLO-World,
YOLOE). There are three nodes involved: one that runs inference, one that tracks objects
across frames, and one that overlays detections visually for debugging.

Launching it
------------

The easiest way is through the TiAGo sim launch file:

.. code-block:: bash

   ros2 launch tiago_sim tiago_yolo.launch.py

This starts YOLOv11 subscribed to ``head_front_camera/image`` with a confidence threshold
of 0.5, running on ``cuda:0``. The model file (``yolo11m.pt``) is loaded from the
``tiago_sim`` package models directory.

If you want to tweak it, all launch arguments are available:

.. code-block:: bash

   ros2 launch tiago_sim tiago_yolo.launch.py \
     model:=/path/to/your_model.pt \
     threshold:=0.3 \
     device:=cpu

Launch arguments
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 25 20 55
   :header-rows: 1

   * - Argument
     - Default
     - Description
   * - ``model``
     - ``yolo11m.pt``
     - Path to the model weights file
   * - ``tracker``
     - ``bytetrack.yaml``
     - Tracker config file (bytetrack or botsort)
   * - ``device``
     - ``cuda:0``
     - Inference device. Use ``cpu`` if no GPU is available
   * - ``enable``
     - ``True``
     - Whether to start detection immediately on launch
   * - ``threshold``
     - ``0.5``
     - Confidence score threshold for detections
   * - ``input_image_topic``
     - ``head_front_camera/image``
     - Image topic to subscribe to
   * - ``image_reliability``
     - ``1`` (BEST_EFFORT)
     - QoS reliability (1 = BEST_EFFORT, 2 = RELIABLE)
   * - ``namespace``
     - ``""``
     - ROS namespace for all nodes and topics

Yolo Node
---------

This is the main inference node. It is a ROS 2 lifecycle node, so it goes through
configure and activate transitions before processing images.

Node name: ``yolo_node``

Topics subscribed
~~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``image_raw``
     - `sensor_msgs/msg/Image <https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html>`_
     - Input image stream from the camera

Topics published
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``detections``
     - ``yolo_msgs/msg/DetectionArray``
     - Array of all detected objects in the current frame, including bounding boxes,
       class names, confidence scores, masks, and keypoints

Services
~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Service
     - Interface
     - Description
   * - ``enable``
     - `std_srvs/srv/SetBool <https://docs.ros2.org/foxy/api/std_srvs/srv/SetBool.html>`_
     - Toggle detection on or off at runtime without restarting the node
   * - ``set_classes``
     - ``yolo_msgs/srv/SetClasses``
     - Change which object classes to detect (YOLOWorld models only)

Parameters
~~~~~~~~~~

.. list-table::
   :widths: 30 15 15 40
   :header-rows: 1

   * - Parameter
     - Type
     - Default
     - Description
   * - ``model_type``
     - string
     - ``YOLO``
     - Model variant to load. Options: ``YOLO``, ``World``, ``YOLOE``
   * - ``model``
     - string
     - ``yolov8m.pt``
     - Path to the model weights file
   * - ``device``
     - string
     - ``cuda:0``
     - Compute device (``cpu``, ``cuda:0``, ``cuda:1``, etc.)
   * - ``fuse_model``
     - bool
     - ``false``
     - Fuse Conv and BN layers for faster inference (not supported by YOLOE)
   * - ``yolo_encoding``
     - string
     - ``bgr8``
     - Image encoding to convert to before passing to the model
   * - ``enable``
     - bool
     - ``true``
     - Start processing images immediately on activation
   * - ``image_reliability``
     - int
     - ``BEST_EFFORT``
     - QoS reliability policy for the image subscription
   * - ``threshold``
     - double
     - ``0.5``
     - Minimum confidence score for a detection to be published
   * - ``iou``
     - double
     - ``0.5``
     - IoU threshold for non-maximum suppression
   * - ``imgsz_height``
     - int
     - ``640``
     - Input image height for inference
   * - ``imgsz_width``
     - int
     - ``640``
     - Input image width for inference
   * - ``half``
     - bool
     - ``false``
     - Use FP16 half-precision inference (faster on supported GPUs)
   * - ``max_det``
     - int
     - ``300``
     - Maximum number of detections per image
   * - ``augment``
     - bool
     - ``false``
     - Apply test-time augmentation for potentially better results at the cost of speed
   * - ``agnostic_nms``
     - bool
     - ``false``
     - Class-agnostic NMS (merges overlapping boxes across different classes)
   * - ``retina_masks``
     - bool
     - ``false``
     - Use full-resolution segmentation masks (higher quality but slower)

Tracking Node
-------------

Tracks detected objects across frames using BYTETracker or BOT-SORT, assigning a
persistent ID to each object so you can follow it over time.

Node name: ``tracking_node``

Topics subscribed
~~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``image_raw``
     - `sensor_msgs/msg/Image <https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html>`_
     - Input image (time-synced with detections)
   * - ``detections``
     - ``yolo_msgs/msg/DetectionArray``
     - Detections from the Yolo Node to associate with tracked IDs

Topics published
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``tracking``
     - ``yolo_msgs/msg/DetectionArray``
     - Detections annotated with persistent tracking IDs

Parameters
~~~~~~~~~~

.. list-table::
   :widths: 30 15 15 40
   :header-rows: 1

   * - Parameter
     - Type
     - Default
     - Description
   * - ``tracker``
     - string
     - ``bytetrack.yaml``
     - Tracker config file. Use ``botsort.yaml`` for BOT-SORT
   * - ``image_reliability``
     - int
     - ``BEST_EFFORT``
     - QoS reliability policy for the image subscription

Debug Node
----------

Overlays detections on the image for visual inspection. Useful for checking that the
model is detecting the right things before wiring it into a behavior tree.

Node name: ``debug_node``

Topics subscribed
~~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``image_raw``
     - `sensor_msgs/msg/Image <https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html>`_
     - Input image (time-synced with detections)
   * - ``detections``
     - ``yolo_msgs/msg/DetectionArray``
     - Detections to overlay on the image

Topics published
~~~~~~~~~~~~~~~~

.. list-table::
   :widths: 30 30 40
   :header-rows: 1

   * - Topic
     - Interface
     - Description
   * - ``dbg_image``
     - `sensor_msgs/msg/Image <https://docs.ros2.org/foxy/api/sensor_msgs/msg/Image.html>`_
     - Image with bounding boxes, masks, and keypoints drawn on it
   * - ``dgb_bb_markers``
     - `visualization_msgs/msg/MarkerArray <https://docs.ros2.org/foxy/api/visualization_msgs/msg/MarkerArray.html>`_
     - 3D bounding box markers for RViz
   * - ``dgb_kp_markers``
     - `visualization_msgs/msg/MarkerArray <https://docs.ros2.org/foxy/api/visualization_msgs/msg/MarkerArray.html>`_
     - Keypoint markers for RViz

Parameters
~~~~~~~~~~

.. list-table::
   :widths: 30 15 15 40
   :header-rows: 1

   * - Parameter
     - Type
     - Default
     - Description
   * - ``image_reliability``
     - int
     - ``BEST_EFFORT``
     - QoS reliability policy for the image subscription
