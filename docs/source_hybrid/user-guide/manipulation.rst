.. _ug-manipulation:

Manipulation (User Guide)
#########################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/manipulation>`
   * :doc:`Theoretical Background <../theory/manipulation>`

Overview
--------
The Manipulation system controls the TIAGo robot's arm and gripper to interact with objects.

Commands
--------
The `tiago_grab` package provides actions for picking and placing.

Use via Behavior Trees:
The `pick_object_example.xml` tree demonstrates how to autonomously pick a detected object.

.. code-block:: bash

    ros2 launch tiago_demos bt_demo.launch.py tree:=pick_object_example.xml
