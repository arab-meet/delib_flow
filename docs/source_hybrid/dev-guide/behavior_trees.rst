.. _dg-behavior-trees:

Behavior Trees (Implementation)
###############################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/behavior_trees>`
   * :doc:`Theoretical Background <../theory/behavior_trees>`

BehaviorTree.CPP
----------------
We use the [BehaviorTree.CPP](https://www.behaviortree.dev/) library (v4).

Custom Nodes
------------
Custom ActionNodes are implemented in C++ inheriting from `BT::StatefulActionNode` or `BT::SyncActionNode`.

Tree XML Structure
------------------
Trees are defined in XML. Example structure:

.. code-block:: xml

   <root main_tree_to_execute="MainTree">
       <BehaviorTree ID="MainTree">
           <Sequence>
               <Action ID="PickObject"/>
               <Action ID="PlaceObject"/>
           </Sequence>
       </BehaviorTree>
   </root>
