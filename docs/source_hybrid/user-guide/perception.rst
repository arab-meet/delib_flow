.. _ug-perception:

Perception (User Guide)
#######################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/perception>`
   * :doc:`Theoretical Background <../theory/perception>`

Overview
--------
The Perception system is responsible for detecting objects and markers in the environment.

Running Object Detection
------------------------
To launch the ArUco marker detection:

.. code-block:: bash

    ros2 launch tiago_aruco_broadcast aruco.launch.py

This publishes the pose of detected markers to TF2.
