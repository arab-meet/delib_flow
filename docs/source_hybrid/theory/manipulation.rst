.. _theory-manipulation:

Manipulation (Theory)
#####################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/manipulation>`
   * :doc:`Implementation <../dev-guide/manipulation>`

Inverse Kinematics
------------------
The system uses numeric IK solvers provided by MoveIt to determine joint angles for a desired end-effector pose.

Motion Planning
---------------
OMPL (Open Motion Planning Library) is used to generate collision-free trajectories.
