.. _theory-navigation:

Navigation (Theory)
###################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/navigation>`
   * :doc:`Implementation <../dev-guide/navigation>`

Overview
--------

Autonomous navigation requires solving three fundamental problems:

1. **Localization**: "Where am I?"
2. **Path Planning**: "How do I get there?"
3. **Motion Control**: "How do I follow the path?"

Localization
------------

Adaptive Monte Carlo Localization (AMCL)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

AMCL estimates robot pose using particle filtering.

**Algorithm**:

.. code-block:: text

   Algorithm: AMCL(sensors, controls, map)
   ───────────────────────────────────────
   1. Initialize particles: X = {x₁, x₂, ..., xₙ}
   2. For each time step:
      a. Motion Update (Prediction):
         For each particle xᵢ:
            xᵢ ← sample from p(x | u, xᵢ₋₁)
      
      b. Sensor Update (Correction):
         For each particle xᵢ:
            wᵢ ← p(z | xᵢ, map)
      
      c. Resampling:
         Draw new particles from X with probability ∝ wᵢ
   
   3. Return weighted mean of particles

**Mathematical Formulation**:

.. math::

   p(x_t | z_{1:t}, u_{1:t}, m) \propto p(z_t | x_t, m) \int p(x_t | u_t, x_{t-1}) p(x_{t-1} | z_{1:t-1}, u_{1:t-1}, m) dx_{t-1}

Where:
- :math:`x_t`: Robot pose at time t
- :math:`z_t`: Sensor measurement at time t
- :math:`u_t`: Control command at time t
- :math:`m`: Map

SLAM (Simultaneous Localization and Mapping)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

When no map exists, SLAM estimates both pose and map simultaneously.

**Graph SLAM** (used by SLAM Toolbox):

Poses and landmarks form a graph. Optimization minimizes:

.. math::

   x^* = \arg\min_x \sum_i e_i(x)^T \Omega_i e_i(x)

Where :math:`e_i(x)` is the error of constraint i, and :math:`\Omega_i` is the information matrix.

Path Planning
-------------

Global Planning (NavFn / A*)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

**A* Algorithm**:

Finds shortest path in a graph by minimizing:

.. math::

   f(n) = g(n) + h(n)

Where:
- :math:`g(n)`: Cost from start to node n
- :math:`h(n)`: Heuristic (estimated cost from n to goal)

For grid-based planning, common heuristics:
- **Manhattan**: :math:`h(n) = |x_n - x_g| + |y_n - y_g|`
- **Euclidean**: :math:`h(n) = \sqrt{(x_n - x_g)^2 + (y_n - y_g)^2}`

**Dijkstra's Algorithm**: Special case where :math:`h(n) = 0`

Local Planning (DWB)
^^^^^^^^^^^^^^^^^^^^

Dynamic Window Approach (DWB) samples velocity commands and scores them.

**Velocity Space**:

.. math::

   V_s = \{(v, \omega) : v_{min} \leq v \leq v_{max}, \omega_{min} \leq \omega \leq \omega_{max}\}

**Dynamic Window** (feasible in one time step):

.. math::

   V_d = \{(v, \omega) : v - a_v \Delta t \leq v \leq v + a_v \Delta t, \omega - a_\omega \Delta t \leq \omega \leq \omega + a_\omega \Delta t\}

**Cost Function**:

.. math::

   G(v, \omega) = \alpha \cdot heading(v, \omega) + \beta \cdot dist(v, \omega) + \gamma \cdot velocity(v, \omega)

Where:
- :math:`heading`: Alignment with goal
- :math:`dist`: Distance to obstacles
- :math:`velocity`: Forward progress

Motion Control
--------------

Pure Pursuit
^^^^^^^^^^^^

Steers robot toward a lookahead point on the path.

.. math::

   \omega = \frac{2v \sin(\alpha)}{L_d}

Where:
- :math:`v`: Linear velocity
- :math:`\alpha`: Angle to lookahead point
- :math:`L_d`: Lookahead distance

Model Predictive Control (MPC)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Optimizes control over a horizon:

.. math::

   u^*_{0:N} = \arg\min_{u_{0:N}} \sum_{k=0}^N \|x_k - x_{ref,k}\|_Q^2 + \|u_k\|_R^2

Subject to dynamics and constraints.

Costmap
-------

2D Occupancy Grid
^^^^^^^^^^^^^^^^^

Each cell stores cost :math:`c \in [0, 254]`:

- **0**: Free space
- **254**: Obstacle
- **255**: Unknown

**Inflation**:

Cost decreases with distance from obstacle:

.. math::

   cost(x, y) = 254 \cdot e^{-\lambda \cdot d(x,y)}

Where :math:`d(x,y)` is distance to nearest obstacle.

**Layered Costmap**:

Multiple layers combine:

.. math::

   C_{total} = \max(C_{static}, C_{obstacle}, C_{inflation})

Challenges
----------

1. **Dynamic Obstacles**: Require prediction and replanning
2. **Narrow Passages**: Local minima in potential fields
3. **Uncertainty**: Sensor noise, odometry drift
4. **Kinematic Constraints**: Nonholonomic robots (differential drive)

References
----------

.. [1] Thrun, S., Burgard, W., & Fox, D. (2005). *Probabilistic Robotics*. MIT Press.
.. [2] LaValle, S. M. (2006). *Planning Algorithms*. Cambridge University Press.
.. [3] Fox, D., Burgard, W., & Thrun, S. (1997). "The dynamic window approach to collision avoidance." *IEEE Robotics & Automation Magazine*.
.. [4] Marder-Eppstein, E., et al. (2010). "The office marathon: Robust navigation in an indoor office environment." *ICRA 2010*.

Advanced Topics
---------------

**Semantic Navigation**:
Uses object detection/segmentation for navigation in human environments.

**Learning-Based Planning**:
Deep reinforcement learning for navigation policies.

**Multi-Robot Navigation**:
Coordination and collision avoidance among multiple robots.

Next Steps
----------

- :doc:`../user-guide/navigation` - Usage guide
- :doc:`../dev-guide/navigation` - Configuration details
- :doc:`behavior_trees` - Integrate navigation with BTs
