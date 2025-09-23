Using Sphinx
============

To make development easier, let's configure Sphinx to
build the documentation automatically whenever changes are made.

1. Let's make sure build directory is generated first

  .. code-block:: bash

    make html

2. Now, Let's use ``sphinx-autobuild``

  .. code-block:: bash

    sphinx-autobuild source/ build/

3. Open ``http://127.0.0.1:8000`` in your browser "`the provided link in the terminal`" and whenever changes are made, you don't need to refresh your browser.

4. If you're using vscode just like me, I recommend installing
   (reStructuredText and Table Formatter) extensions from the extension market,
   or/ use VSCode command prompt (Ctrl+P), then:

  .. code-block:: bash

    ext install lextudio.restructuredtext-pack
    ext install shuworks.vscode-table-formatter

Check the following links on reStructuredText introduction:

* `Intro to Documentation <https://sphinx-intro-tutorial.readthedocs.io/en/latest/rst_intro.html>`_

Also check this project files that I provided to serve as example:

* Check out :ref:`navigation tutorial file <navigation>`
