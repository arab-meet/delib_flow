.. _dg-navigation:

Navigation (Implementation)
###########################

.. note::
   **See also:**
   
   * :doc:`User Guide <../user-guide/navigation>`
   * :doc:`Theoretical Background <../theory/navigation>`

The navigation stack implementation is primarily tailored through configuration files rather than extensive C++ coding, leveraging standard Nav2 nodes.

Package: tiago_nav
------------------

Launch Structure
^^^^^^^^^^^^^^^^
* `tiago_nav2.launch.py`: Main entry point.
    * Launches `nav2_bringup` with custom params.

Behavior Tree Integration
^^^^^^^^^^^^^^^^^^^^^^^^^
The `tiago_demos` trees utilize standard Nav2 actions:
* `NavigateToPose`
* `Spin`
* `Wait`

.. image:: ../../assets/navigation_stack.png
   :alt: Navigation Architecture
