.. _ug-navigation:

Navigation (User Guide)
#######################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/navigation>`
   * :doc:`Theoretical Background <../theory/navigation>`

Overview
--------
The Navigation system enables the TIAGo robot to move autonomously in a mapped environment using the ROS 2 Navigation Stack (Nav2).

Key Packages
------------

tiago_nav
^^^^^^^^^
The `tiago_nav` package contains the launch files and configurations for the Nav2 stack.

**Launching Navigation**

.. code-block:: bash

   ros2 launch tiago_nav tiago_nav2.launch.py

**Configuration**
Key parameters can be found in `tiago_nav/config/`.
