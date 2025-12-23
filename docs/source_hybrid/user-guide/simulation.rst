.. _ug-simulation:

Simulation (User Guide)
#######################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/simulation>`
   * :doc:`Theoretical Background <../theory/simulation>`

Overview
--------
We use [Gazebo](https://gazebosim.org/) Harmonic for physics-based simulation of the TIAGo robot.

Launching
---------
.. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py

Features
--------
* **Robot Model**: Full URDF with sensors (Lidar, RGB-D Camera).
* **Environment**: A custom world file populated with objects.
