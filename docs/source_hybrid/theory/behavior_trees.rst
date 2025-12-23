.. _theory-behavior-trees:

Behavior Trees (Theory)
#######################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/behavior_trees>`
   * :doc:`Implementation <../dev-guide/behavior_trees>`

Mathematical Formalism
----------------------

A Behavior Tree is a directed rooted tree where:

- **Root**: Single entry point
- **Internal Nodes**: Control flow nodes (Sequence, Fallback, Parallel, Decorator)
- **Leaf Nodes**: Execution nodes (Action, Condition)

Each node returns one of three states:

.. math::

   \text{Status} \in \{\text{SUCCESS}, \text{FAILURE}, \text{RUNNING}\}

Node Types
----------

Sequence Node (→)
^^^^^^^^^^^^^^^^^

Executes children left-to-right until one fails or all succeed.

.. math::

   \text{Sequence}(c_1, c_2, \ldots, c_n) = 
   \begin{cases}
   \text{FAILURE} & \text{if any } c_i = \text{FAILURE} \\
   \text{RUNNING} & \text{if any } c_i = \text{RUNNING} \\
   \text{SUCCESS} & \text{if all } c_i = \text{SUCCESS}
   \end{cases}

**Logical Equivalent**: AND operator

Fallback Node (?)
^^^^^^^^^^^^^^^^^

Executes children left-to-right until one succeeds or all fail.

.. math::

   \text{Fallback}(c_1, c_2, \ldots, c_n) = 
   \begin{cases}
   \text{SUCCESS} & \text{if any } c_i = \text{SUCCESS} \\
   \text{RUNNING} & \text{if any } c_i = \text{RUNNING} \\
   \text{FAILURE} & \text{if all } c_i = \text{FAILURE}
   \end{cases}

**Logical Equivalent**: OR operator

Parallel Node
^^^^^^^^^^^^^

Executes all children simultaneously. Succeeds if M out of N children succeed.

.. math::

   \text{Parallel}_M(c_1, \ldots, c_n) = 
   \begin{cases}
   \text{SUCCESS} & \text{if } \#\{c_i = \text{SUCCESS}\} \geq M \\
   \text{FAILURE} & \text{if } \#\{c_i = \text{FAILURE}\} > n - M \\
   \text{RUNNING} & \text{otherwise}
   \end{cases}

Decorator Nodes
^^^^^^^^^^^^^^^

Modify child behavior. Examples:

- **Inverter**: Returns opposite of child
- **RetryUntilSuccess**: Repeats child until SUCCESS
- **Timeout**: Fails child if exceeds time limit

Execution Semantics
-------------------

Tick Mechanism
^^^^^^^^^^^^^^

The tree is executed by "ticking" the root node at regular intervals (e.g., 10 Hz).

.. code-block:: text

   Algorithm: Tick(node)
   ────────────────────────
   1. If node is Leaf:
        return ExecuteAction(node)
   
   2. If node is Sequence:
        for each child in children:
            status ← Tick(child)
            if status ≠ SUCCESS:
                return status
        return SUCCESS
   
   3. If node is Fallback:
        for each child in children:
            status ← Tick(child)
            if status ≠ FAILURE:
                return status
        return FAILURE

Halting
^^^^^^^

When a node transitions from RUNNING to SUCCESS/FAILURE, all its RUNNING children must be halted.

Comparison with Finite State Machines
--------------------------------------

.. list-table::
   :header-rows: 1
   :widths: 30 35 35

   * - Aspect
     - Behavior Tree
     - Finite State Machine
   * - **Modularity**
     - High (subtrees reusable)
     - Low (states tightly coupled)
   * - **Scalability**
     - Excellent
     - Poor (state explosion)
   * - **Reactivity**
     - High (re-evaluated each tick)
     - Medium (requires explicit transitions)
   * - **Debugging**
     - Easy (tree visualization)
     - Moderate (state diagrams)

Advantages of Behavior Trees
-----------------------------

1. **Composability**: Build complex behaviors from simple subtrees
2. **Readability**: Visual structure is intuitive
3. **Reactivity**: Automatically responds to environmental changes
4. **Modularity**: Reuse subtrees across different robots/scenarios

Theoretical Foundations
-----------------------

Behavior Trees originate from:

- **Video Game AI** (Halo 2, 2004)
- **Hierarchical Task Networks** (HTN) in planning
- **Reactive Planning** in robotics

Formal verification of BTs has been studied using:

- **Temporal Logic**: LTL, CTL
- **Model Checking**: Verify properties like liveness, safety

References
----------

.. [1] Colledanchise, M., & Ögren, P. (2018). *Behavior Trees in Robotics and AI*. CRC Press.
.. [2] Marzinotto, A., Colledanchise, M., Smith, C., & Ögren, P. (2014). "Towards a unified behavior trees framework for robot control." *ICRA 2014*.
.. [3] Ögren, P. (2012). "Increasing modularity of UAV control systems using computer game behavior trees." *AIAA Guidance, Navigation, and Control Conference*.

Extensions
----------

**Probabilistic BTs**:
Nodes can have success/failure probabilities for uncertainty modeling.

**Learning BTs**:
Structure and parameters learned from demonstrations using:
- Genetic algorithms
- Reinforcement learning

**Distributed BTs**:
Multiple agents coordinate via shared blackboard or communication.

Next Steps
----------

- :doc:`../user-guide/behavior_trees` - Practical usage
- :doc:`../dev-guide/behavior_trees` - Implementation details
- :doc:`navigation` - Apply BTs to navigation
