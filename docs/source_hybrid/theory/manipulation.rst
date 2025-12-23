.. _theory-manipulation:

Manipulation (Theory)
#####################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/manipulation>`
   * :doc:`Implementation <../dev-guide/manipulation>`

Kinematics
----------

Forward Kinematics
^^^^^^^^^^^^^^^^^^

Maps joint angles to end-effector pose:

.. math::

   \mathbf{x} = f(\mathbf{q})

Where:
- :math:`\mathbf{q} \in \mathbb{R}^n`: Joint angles
- :math:`\mathbf{x} \in SE(3)`: End-effector pose (position + orientation)

Computed using **Denavit-Hartenberg** (DH) parameters or **URDF** kinematic chains.

Inverse Kinematics (IK)
^^^^^^^^^^^^^^^^^^^^^^^

Finds joint angles for desired end-effector pose:

.. math::

   \mathbf{q}^* = f^{-1}(\mathbf{x}_{desired})

**Challenges**:
- Multiple solutions
- No closed-form solution for many robots
- Joint limits

**Numerical Methods**:
- Jacobian-based (Newton-Raphson)
- Optimization-based
- Sampling-based (RRT)

Motion Planning
---------------

Configuration Space (C-Space)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Robot configuration space is the set of all possible joint configurations.

**Free Space**:

.. math::

   \mathcal{C}_{free} = \{\mathbf{q} \in \mathcal{C} : \text{robot}(\mathbf{q}) \cap \text{obstacles} = \emptyset\}

Sampling-Based Planning (RRT)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Rapidly-exploring Random Tree builds a tree in C-space:

.. code-block:: text

   Algorithm: RRT(q_start, q_goal)
   ────────────────────────────────
   1. T ← {q_start}
   2. For i = 1 to N:
      a. q_rand ← RandomConfig()
      b. q_near ← NearestNeighbor(T, q_rand)
      c. q_new ← Steer(q_near, q_rand, Δq)
      d. If CollisionFree(q_near, q_new):
           T ← T ∪ {q_new}
      e. If Distance(q_new, q_goal) < ε:
           Return Path(q_start, q_new, q_goal)
   3. Return FAILURE

Grasp Planning
--------------

Force Closure
^^^^^^^^^^^^^

A grasp achieves force closure if contact forces can resist any external wrench.

For 2D, requires at least 3 non-collinear contacts.

**Grasp Matrix**:

.. math::

   \mathbf{w} = G \mathbf{f}

Where:
- :math:`\mathbf{w}`: Wrench on object
- :math:`G`: Grasp matrix
- :math:`\mathbf{f}`: Contact forces

**Quality Metrics**:
- Largest minimum wrench
- Volume of grasp wrench space

References
----------

.. [1] Murray, R. M., Li, Z., & Sastry, S. S. (1994). *A Mathematical Introduction to Robotic Manipulation*. CRC Press.
.. [2] LaValle, S. M. (2006). *Planning Algorithms*. Cambridge University Press.
.. [3] Sucan, I. A., & Chitta, S. (2019). "MoveIt!: An introduction." *Robotics Research*.

Next Steps
----------

- :doc:`../user-guide/manipulation` - Usage
- :doc:`../dev-guide/manipulation` - MoveIt integration
