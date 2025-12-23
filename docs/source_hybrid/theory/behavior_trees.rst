.. _theory-behavior-trees:

Behavior Trees (Theory)
#######################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/behavior_trees>`
   * :doc:`Implementation <../dev-guide/behavior_trees>`

Concept
-------
Behavior Trees (BTs) are a mathematical model of plan execution. They switch between a finite set of tasks in a modular way.

Key Nodes
---------
* **Sequence (->)**: Executes children in order. Fails if one fails.
* **Fallback (?)**: Executes children in order. Succeeds if one succeeds.
* **Action**: Decorator. Performs a task.
* **Condition**: Checks a state.
