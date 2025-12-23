.. _theory-perception:

Perception (Theory)
###################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/perception>`
   * :doc:`Implementation <../dev-guide/perception>`

ArUco Marker Detection
-----------------------

Pose Estimation
^^^^^^^^^^^^^^^

Given 4 corner points in image and known marker size, estimate 6-DOF pose.

**Perspective-n-Point (PnP)**:

Minimizes reprojection error:

.. math::

   [\mathbf{R}, \mathbf{t}]^* = \arg\min_{\mathbf{R}, \mathbf{t}} \sum_i \|\mathbf{p}_i - \pi(\mathbf{R} \mathbf{P}_i + \mathbf{t})\|^2

Where:
- :math:`\mathbf{P}_i`: 3D marker corners  
- :math:`\mathbf{p}_i`: 2D image corners
- :math:`\pi`: Camera projection

**Camera Model**:

.. math::

   \begin{bmatrix} u \\ v \\ 1 \end{bmatrix} = K \begin{bmatrix} X/Z \\ Y/Z \\ 1 \end{bmatrix}

Where :math:`K` is the intrinsic matrix.

Camera Calibration
^^^^^^^^^^^^^^^^^^

Estimate intrinsic parameters :math:`K` and distortion coefficients from checkerboard images.

**Zhang's Method**: Homography-based calibration.

References
----------

.. [1] Garrido-Jurado, S., et al. (2014). "Automatic generation and detection of highly reliable fiducial markers under occlusion." *Pattern Recognition*.

Next Steps
----------

- :doc:`../user-guide/perception` - Usage
- :doc:`../dev-guide/perception` - Implementation
