.. _demo_behavior:

Demo Behavior Boiler Plate
##########################

Getting Started
---------------

1. Start Gazebo simulation

  .. code-block:: bash

    ros2 launch tiago_sim sim.launch.py

2. Start tiago move_group and grab2 planning server

  .. code-block:: bash

    ros2 launch tiago_grab tiago_moveit2.launch.py

3. Start Nav2

  .. code-block:: bash

    ros2 launch tiago_nav tiago_nav2.launch.py

4. Run example demo

  .. code-block:: bash

    ros2 launch tiago_demos tiago_demo.launch.py
