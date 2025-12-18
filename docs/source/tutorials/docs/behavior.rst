.. _demo_behavior:

Demo Behavior Boiler Plate
##########################

Getting Started
---------------

You can run a launch file that brings up the entire Tiago robot simulation
along with Moveit2 and Nav2 by executing the following command in a terminal:

.. code-block:: bash

    ros2 launch tiago_demos tiago_bringup.launch.py

Check ``tiago_bringup.launch.py`` for more details.

Then you will need to call the ``bt_executor`` node to run the behavior tree:

.. code-block:: bash

  ros2 launch tiago_demos tiago_demo.launch.py tree:=pick_object_example.xml
