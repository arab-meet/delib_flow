.. _dg-manipulation:

Manipulation (Implementation)
#############################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/manipulation>`
   * :doc:`Theoretical Background <../theory/manipulation>`

Arguments
---------
The manipulation logic is implemented in the `tiago_grab` package.

Key Components
--------------
* **MoveIt 2**: Used for motion planning and kinematic solving.
* **Custom Actions**: Wrapped as Behavior Tree nodes.

Launch Files
------------
* `tiago_grab.launch.py`: Brings up the MoveIt interfaces and the grasping action server.
