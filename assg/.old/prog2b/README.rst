EC Homework 2
=============


Select up to +8 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
09/25/16 at 6:00 PM).


1. Text-mode video games.
     [+8] Write two versions of a text-mode video game in which a character
     travels along an 8x8 grid (which might consist of rooms, or other spaces).
     Your game should use a command interface which supports commands ``move``
     (with arguments ``north``, ``south``, ``east`` ``west``) and ``search`` to
     print the position in the grid and search the area [+2]. Support at least
     two other commands [+2]. Place all the functions which are common to both
     versions of the games into a library [+2].  Most importantly, in creating
     the two versions, abide by DRY (do not repeat yourself), *or else* [-8].
     All game data should be stored in a file so it can be changed without
     re-compiling the code (thus the variations in your two versions must be in
     game mechanics, not merely game data) [+2].  The game must not crash as a
     result of user input [-4].  You are free to define the objective of the
     games, the names of the games, and make additions, provided the
     specifications of the problem are met.


2. Parameterized animations.
     [+8] Write a calculated animation (similar to ``asciimation``; *not* a
     pre-generated animation as in ``color-drawing``) that accepts command-line
     arguments which can control the parameters of the animation.  You must use
     ``getopts`` to flexibly handle options.  Have one option to specify the
     color set (``-c`` or ``--color``, which accepts any of ``roygbiv`` for
     permissible colors [+2].  Another option should specify the speed (``-s``
     or ``--speed``, which accepts a floating-point multiplier which modifies
     the original speed, such that it can be run slower or faster) [+2].  A
     flag should print usage information (``-h`` or ``--help``) [+2].  You may
     determine the name of the animation.  If you did ``asciimation`` earlier,
     your animation must be different in this version. Furthermore, it should
     potentially be able to support all colors [+2].  It need not support all
     colors in one frame, however; it could change across frames.  Examples may
     be random bouncing balls, color spirals, raining text (a la *The Matrix*
     intro), and other patterns amenable to calculation.  

