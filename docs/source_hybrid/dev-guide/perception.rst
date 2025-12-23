.. _dg-perception:

Perception (Implementation)
###########################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/perception>`
   * :doc:`Theoretical Background <../theory/perception>`

Package: tiago_aruco_broadcast
------------------------------
This package wraps OpenCV ArUco detection.

Nodes
^^^^^
* `aruco_broadcaster`: Subscribes to camera image, detects markers, and broadcasts transforms.
