.. _theory-navigation:

Navigation (Theory)
###################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/navigation>`
   * :doc:`Implementation <../dev-guide/navigation>`

This section explains the algorithms used in the Navigation stack.

SLAM and Localization
---------------------
The system uses **AMCL** (Adaptive Monte Carlo Localization) for localization within a known map.
For mapping, we use **SLAM Toolbox**, which implements graph-based SLAM.

Path Planning
-------------
* **Global Planner**: Uses A* or Dijkstra on the static global costmap.
* **Local Planner**: Uses DWB (Dynamic Window Approach variant) to avoid dynamic obstacles.
