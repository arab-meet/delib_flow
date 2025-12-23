.. _ug-perception:

Perception (User Guide)
#######################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/perception>`
   * :doc:`Theoretical Background <../theory/perception>`

Overview
--------

The Perception system enables the TIAGo robot to detect and localize objects in its environment using:

- **ArUco Markers** - For precise object/location identification
- **YOLO (Optional)** - For general object detection

Prerequisites
-------------

Ensure the robot (simulated or real) is running with camera topics publishing.

Verify camera data:

.. code-block:: bash

    ros2 topic list | grep camera
    ros2 topic hz /camera/image_raw

ArUco Marker Detection
----------------------

What are ArUco Markers?
^^^^^^^^^^^^^^^^^^^^^^^

ArUco markers are binary square fiducial markers that provide:
- Unique identification (each marker has an ID)
- 6-DOF pose estimation
- Robust detection even at angles

Generating Markers
^^^^^^^^^^^^^^^^^^

To create your own ArUco markers:

.. code-block:: bash

    # Install if not available
    sudo apt install ros-jazzy-aruco-opencv

    # Generate a marker (ID 42, size 200x200 pixels)
    ros2 run aruco_opencv aruco_marker_generator \
        --id 42 \
        --size 200 \
        --output marker_42.png

.. tip::
   Print markers on white paper. Ensure high contrast and avoid reflections.
   Recommended physical size: 10-15cm for TIAGo's camera.

Running ArUco Detection
^^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 launch tiago_aruco_broadcast aruco.launch.py

This will:
1. Subscribe to camera images
2. Detect visible ArUco markers
3. Publish marker poses to TF2
4. Publish detections to ``/aruco_detections`` topic

Viewing Detections
^^^^^^^^^^^^^^^^^^

**In RViz**:

1. Add ``TF`` display
2. Enable ``aruco_*`` frames
3. Add ``MarkerArray`` display
4. Subscribe to ``/aruco_markers``

**From Command Line**:

.. code-block:: bash

    ros2 topic echo /aruco_detections

Configuration
^^^^^^^^^^^^^

Edit ``tiago_aruco_broadcast/config/aruco_params.yaml``:

.. code-block:: yaml

    marker_size: 0.15          # Physical marker size in meters
    dictionary_id: 4           # DICT_4X4_50 (use same as generator)
    camera_frame: camera_link
    min_marker_size_pixels: 20 # Ignore markers smaller than this

Camera Calibration
------------------

Why Calibration Matters
^^^^^^^^^^^^^^^^^^^^^^^

Accurate perception requires well-calibrated cameras. Poor calibration leads to:
- Incorrect pose estimates
- Failed grasps
- Navigation errors

Calibration Process
^^^^^^^^^^^^^^^^^^^

1. **Print Calibration Pattern**:

   Use a checkerboard pattern (e.g., 8x6 squares, 25mm square size).

2. **Run Calibration**:

   .. code-block:: bash

      ros2 run camera_calibration cameracalibrator \
          --size 8x6 \
          --square 0.025 \
          --no-service-check \
          image:=/camera/image_raw

3. **Move Pattern**:
   
   - Different positions
   - Different angles
   - Different distances
   
   The calibration GUI will show progress bars filling up.

4. **Calibrate and Save**:
   
   Click "CALIBRATE" when bars are full, then "COMMIT" to save.

5. **Verify**:

   Re-run ArUco detection and check if pose estimates are accurate.

Object Detection (YOLO)
-----------------------

Running YOLO Detection
^^^^^^^^^^^^^^^^^^^^^^

.. code-block:: bash

    ros2 launch tiago_sim sim.launch.py yolo:=true

This launches YOLOv11 for general object detection.

Viewing Results
^^^^^^^^^^^^^^^

**Visual Output**:

.. code-block:: bash

    ros2 run rqt_image_view rqt_image_view /yolo/detections

**Detection Data**:

.. code-block:: bash

    ros2 topic echo /yolo/detections

Each detection includes:
- Class name (e.g., "bottle", "cup")
- Confidence score
- Bounding box coordinates

Troubleshooting
---------------

No Markers Detected
^^^^^^^^^^^^^^^^^^^

**Solutions**:

1. **Check Lighting**: Ensure good, even lighting without glare
2. **Verify Marker Size**: Must match ``marker_size`` parameter
3. **Check Camera**: Ensure camera is publishing:

   .. code-block:: bash

      ros2 topic hz /camera/image_raw

4. **Check Range**: ArUco works best at 0.5-3.0m distance

Poor Pose Accuracy
^^^^^^^^^^^^^^^^^^

**Solutions**:

1. **Recalibrate Camera**: Follow calibration steps above
2. **Increase Marker Size**: Larger markers = better accuracy
3. **Reduce Motion Blur**: Keep robot/marker still during detection

Camera Not Publishing
^^^^^^^^^^^^^^^^^^^^^

**Solutions**:

1. **Check if Gazebo is running**: Simulation cameras require Gazebo
2. **Verify camera plugin**: Check ``tiago_sim/urdf/sensors``
3. **Restart simulation**: Sometimes cameras need a fresh start

YOLO Too Slow
^^^^^^^^^^^^^

**Solutions**:

1. **Use GPU**: Enable CUDA if available
2. **Reduce Resolution**: In launch file, set ``image_width: 640``
3. **Lower FPS**: Throttle camera topic:

   .. code-block:: bash

      ros2 run topic_tools throttle messages /camera/image_raw 10.0 /camera/throttled

Best Practices
--------------

1. **Marker Placement**: Place markers flat, perpendicular to camera view
2. **Multiple Markers**: Use different IDs for different objects/locations
3. **Lighting Consistency**: Maintain similar lighting between calibration and use
4. **Regular Calibration**: Recalibrate if camera is moved or bumped
5. **Test Range**: Know your detection range limits

Integration with Other Systems
-------------------------------

Using Detections in Navigation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Transform marker pose to navigation goal:

.. code-block:: python

    from tf2_ros import Buffer, TransformListener
    
    tf_buffer = Buffer()
    tf_listener = TransformListener(tf_buffer)
    
    # Get transform from map to marker
    transform = tf_buffer.lookup_transform('map', 'aruco_42', rclpy.time.Time())

Using Detections in Manipulation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Pass marker ID to grasp action:

.. code-block:: bash

    ros2 action send_goal /pick_object tiago_grab/action/Pick "{object_id: 'aruco_42'}"

The manipulation system will look up the marker's pose from TF2.

Next Steps
----------

- :doc:`../dev-guide/perception` - Customize detection parameters
- :doc:`../theory/perception` - Understand pose estimation algorithms  
- :doc:`manipulation` - Use detected objects for grasping
- :doc:`navigation` - Navigate to detected markers
