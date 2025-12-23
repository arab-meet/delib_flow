.. _theory-simulation:

Simulation (Theory)
###################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/simulation>`
   * :doc:`Implementation <../dev-guide/simulation>`

Physics Engines
---------------

Rigid Body Dynamics
^^^^^^^^^^^^^^^^^^^

Newton-Euler equations:

.. math::

   \mathbf{F} = m\mathbf{a}

.. math::

   \boldsymbol{\tau} = I\boldsymbol{\alpha} + \boldsymbol{\omega} \times (I\boldsymbol{\omega})

Constraint-Based Simulation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Joints impose constraints on relative motion.

**Contact Constraints**:

Non-penetration: :math:`\phi(\mathbf{q}) \geq 0`

Solved using:
- Lagrange multipliers
- Projected Gauss-Seidel
- Sequential impulses

References
----------

.. [1] Featherstone, R. (2014). *Rigid Body Dynamics Algorithms*. Springer.

Next Steps
----------

- :doc:`../user-guide/simulation` - Usage
- :doc:`../dev-guide/simulation` - URDF configuration
