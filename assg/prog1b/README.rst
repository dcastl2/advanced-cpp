EC Homework 1
=============

Select up to 64 points worth of problems.  You may earn +N*2 extra credit
points if you submit the assignment N<=4 days in advance of the due date
(Sunday, 09/11/16).

1. Color spray.
     [+2] Write a program to fill the entire screen with random letters and
     numbers, each printed in a random color.  It should run no longer than
     a second.  Call this ``color-spray.cpp``.

2. Colored frame animation.
     [+2] If you did ``color-drawing.cpp``, add another frame to it to make it
     a two-frame animation that repeats on loop infinitely.  Your two frames
     must be different textually and in color to warrant the points (don't be
     lazy!).  Call this ``color-comic.cpp``.

     a. Complex frame animations.
         [+2] Additional points if add yet six more distinct frames to it to
         make it an eight-frame animation that repeats on loop infinitely.
         In that case, call it ``color-book.cpp`` instead.

3. Colorized typed-out text.
     [+2] Examine, compile and run the code ``color-cat.cpp``, which accepts a
     file as a command-line argument (try running it with the file
     ``colorized.txt``).  Modify ``color-cat.cpp`` to *type out* the text in
     color instead of concatenating it at once.  Use concepts from
     ``typeout.cpp``.  Call the new program ``color-typeout.cpp``.

     a. Use it to type out colorized notes. 
         [+2] If you have finished, summarize the notes in
         ``code/alg/big-O.rst`` using color markers supported by your
         implementation of ``color-typeout``. Use the color markers to
         syntax-highlight the code, key terms, math, and important ideas.
         Call the notes ``notes.txt``.

5. Colored digital clock.
     [+4] Examine, compile and run ``ascii-font.cpp`` for an example of how to
     print out ASCII-art stylized text strings to the screen. Combine this code
     with ``clock.cpp`` to create a green digital clock that uses your own
     ASCII-art font [3]. Call it ``digital-clock.cpp``.  Yours should support
     numbers and colons instead of letters; use a different art style than the
     one shown (i.e. asterisks) [1].

6. Asciimation.
     [+4] If you didn't already, you may do problem 7 from Homework 1
     (``asciimation.cpp``). See the specifications for that problem (your score
     shall be calculated as if it were graded out of 32, then integer-divided
     by 8). 

7. A simple physics engine.
     [+8] Modify my ``asciimation.cpp`` to have *one* ball which starts at a
     random (x, y) coordinate; its horizontal momentum should be constant, but
     it should accelerate downward as if affected by a gravitational force, and
     bounce back up when it collides with the bottom (preserving its vertical
     momentum).  Its acceleration need not be exactly 9.8 m/s^2 on-screen, but
     it should appear realistic. Call this ``gravity.cpp``.
