.. _manipulation:

Manipulation
############

Controllers
-----------

Tiago provides the following ``ros2_control`` controllers for joints control of type `FollowJointTrajectory`:

+-----------+---------------------------------------------+
| Component | ROS2 Action Name                            |
+-----------+---------------------------------------------+
| Arm       | /arm_controller/follow_joint_trajectory     |
+-----------+---------------------------------------------+
| Gripper   | /gripper_controller/follow_joint_trajectory |
+-----------+---------------------------------------------+
| Head      | /head_controller/follow_joint_trajectory    |
+-----------+---------------------------------------------+
| Torso     | /torso_controller/follow_joint_trajectory   |
+-----------+---------------------------------------------+

while publishing the following topics for joints state feedback of type `JointTrajectory`:

+-----------+--------------------------------------+
| Component | ROS2 Topic Name                      |
+-----------+--------------------------------------+
| Arm       | /arm_controller/controller_state     |
+-----------+--------------------------------------+
| Gripper   | /gripper_controller/controller_state |
+-----------+--------------------------------------+
| Head      | /head_controller/controller_state    |
+-----------+--------------------------------------+
| Torso     | /torso_controller/controller_state   |
+-----------+--------------------------------------+

Moveit2 move_group
==================

Tiago provides the following planning groups

+-----+----------------+
| #   | Planning Group |
+-----+----------------+
| 1   | arm            |
+-----+----------------+
| 2   | arm_torso      |
+-----+----------------+
| 3   | gripper        |
+-----+----------------+

.. note:: head_controller is not available in `move_group`, so you have to control it directly using its action server.

Getting Started
---------------

1. Start Gazebo simulation

  .. code-block:: bash

    ros2 launch tiago_sim tiago_sim.launch.py

2. Start move_group node

  .. code-block:: bash

    ros2 launch tiago_moveit_config move_group.launch.py

3. Start rviz2 (Optional)

  .. code-block:: bash

    ros2 launch tiago_moveit_config moveit_rviz.launch.py
