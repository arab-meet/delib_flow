.. _ug-behavior-trees:

Behavior Trees (User Guide)
###########################

.. note::
   **See also:**
   
   * :doc:`Implementation Details <../dev-guide/behavior_trees>`
   * :doc:`Theoretical Background <../theory/behavior_trees>`

Overview
--------

Behavior Trees (BTs) are the core decision-making engine of this robot. They organize tasks into a hierarchical tree structure of **Actions**, **Conditions**, and **Control Flow** nodes.

.. image:: ../../assets/behavior_tree_concept.png
   :alt: Behavior Tree Concept
   :align: center
   :width: 600px

Why Behavior Trees?
^^^^^^^^^^^^^^^^^^^

- **Modularity**: Easy to add new behaviors without modifying existing ones
- **Readability**: Visual structure makes complex logic understandable
- **Reusability**: Subtrees can be used across multiple robots/scenarios
- **Debugging**: Clear execution flow simplifies troubleshooting

Available Demo Trees
--------------------

The ``tiago_demos/trees`` directory contains several pre-built examples:

1. ``pick_object_example.xml`` - Pick and place demonstration
2. ``our_map_example.xml`` - Navigation with mapping

Running a Demo
--------------

Basic Execution
^^^^^^^^^^^^^^^

To run a specific demo tree:

.. code-block:: bash

   ros2 launch tiago_demos bt_demo.launch.py tree:=pick_object_example.xml

.. tip::
   You can monitor the tree execution in real-time using Groot (see :ref:`visualization-tools`).

Step-by-Step: Pick Object Demo
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1. **Launch Simulation**:

   .. code-block:: bash

      ros2 launch tiago_sim tiago_sim.launch.py

2. **Start Navigation**:

   .. code-block:: bash

      ros2 launch tiago_nav tiago_nav2.launch.py

3. **Run Perception**:

   .. code-block:: bash

      ros2 launch tiago_aruco_broadcast aruco.launch.py

4. **Execute Behavior Tree**:

   .. code-block:: bash

      ros2 launch tiago_demos bt_demo.launch.py tree:=pick_object_example.xml

Understanding Tree XML
----------------------

Here's a simplified example of a behavior tree XML:

.. code-block:: xml

   <?xml version="1.0"?>
   <root main_tree_to_execute="PickAndPlace">
       <BehaviorTree ID="PickAndPlace">
           <Sequence name="MainSequence">
               <!-- Check battery level -->
               <Condition ID="BatteryOK"/>
               
               <!-- Navigate to object -->
               <Action ID="NavigateToPose" 
                       target_x="1.0" 
                       target_y="0.5" 
                       target_yaw="0.0"/>
               
               <!-- Pick the object -->
               <Action ID="PickObject" object_id="aruco_42"/>
               
               <!-- Navigate to drop location -->
               <Action ID="NavigateToPose" 
                       target_x="2.0" 
                       target_y="1.0" 
                       target_yaw="1.57"/>
               
               <!-- Place the object -->
               <Action ID="PlaceObject"/>
           </Sequence>
       </BehaviorTree>
   </root>

Node Types Explained
^^^^^^^^^^^^^^^^^^^^

.. list-table::
   :header-rows: 1
   :widths: 20 80

   * - Node Type
     - Behavior
   * - **Sequence**
     - Executes children left-to-right. Fails if any child fails.
   * - **Fallback**
     - Executes children until one succeeds. Used for retry logic.
   * - **Action**
     - Performs a task (navigation, pick, place).
   * - **Condition**
     - Checks a state (battery level, object detected).
   * - **Decorator**
     - Modifies child behavior (retry N times, timeout).

Creating Custom Trees
---------------------

1. Create a new XML file in ``tiago_demos/trees/my_custom_tree.xml``
2. Define your behavior structure using the examples above
3. Run with:

   .. code-block:: bash

      ros2 launch tiago_demos bt_demo.launch.py tree:=my_custom_tree.xml

.. _visualization-tools:

Visualization Tools
-------------------

Groot
^^^^^

`Groot <https://github.com/BehaviorTree/Groot>`_ is a graphical editor for BehaviorTree.CPP.

**Installation**:

.. code-block:: bash

   sudo apt install groot

**Usage**:

.. code-block:: bash

   groot

Then load your XML file through the GUI.

Debugging
---------

Common Issues
^^^^^^^^^^^^^

**Issue**: Tree immediately fails.

**Solution**: Check ROS 2 topic connections:

.. code-block:: bash

   ros2 topic list
   ros2 topic echo /bt_status

**Issue**: Action nodes time out.

**Solution**: Verify action servers are running:

.. code-block:: bash

   ros2 action list

Best Practices
--------------

1. **Keep Trees Simple**: Break complex behaviors into multiple subtrees
2. **Use Descriptive Names**: ``NavigateToKitchen`` vs ``Nav1``
3. **Test Incrementally**: Add one action at a time
4. **Monitor Execution**: Use Groot for real-time visualization
5. **Handle Failures**: Always include fallback nodes for critical actions

Next Steps
----------

- :doc:`../dev-guide/behavior_trees` - Learn to create custom BT nodes in C++
- :doc:`../theory/behavior_trees` - Understand the mathematical theory
- :doc:`navigation` - Integrate navigation actions
- :doc:`manipulation` - Add manipulation behaviors
