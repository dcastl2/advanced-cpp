Homework 1
==========

Select up to 64 points worth of problems.  For this time only, you may earn
+2*N extra credit points if you submit the assignment N<=4 days in advance of
the due date (Sunday, 09/04/16 at 6:00 PM).

1. Subliminal messages.
     [16] Write a program which alternately prints "Hello, world!" and "Buy
     Coca-Cola!" for fixed intervals, between screen clears, indefinitely.  The
     "Buy Coca-Cola" message should be below the liminal threshold (the user
     not be able to consciously perceive it), which is about 200ms. Call this 
     ``blink.cpp``. 

2. Color drawing.
     [16] Write a program to print a color drawing to the screen.  Use the
     provided ``color.h`` and refer to ``color.cpp`` for an example.  The 
     drawing should be at least 8 rows x 16 cols [8] and use at least three 
     colors [8].  Call this ``color-drawing.cpp``.

3. Code template writer.
     [16] Write a program to read in a filename via stdin and write a C++
     source template to it [8].  Ensure that the generated file compiles and
     runs [8].  Such a template would have at least a #include directive and
     an empty main function, ready to be filled. Once you have written this 
     program, you may use it to jumpstart your work on other programs. 
     Call your program source ``setup.cpp``.

4. Countdown.
     [16] Write a program to calculate the amount of time you have until your
     next assignment is due in "hhh:mm:ss" format [8]; it should refresh 
     every second [8], clearing the screen and displaying at the bottom of the
     screen.  It should work for any given time during the semester, assuming
     all assignments are due on Sunday at 6:00 PM. Refer to the ``ctime.cpp``
     code.  Call this ``countdown.cpp``.

5. File typeout.
     [16] Write a program to read in a filename via stdin and type out the 
     text in the file [8] to stdout.  Use the file ``typeout.cpp`` for 
     reference.  Use random wait times between typed letters to make it seem
     like a human is typing the file [8].  The typist should average about 300
     characters per minute.  Call this ``file-typeout.cpp``.

     a. More convincing file typeout.
          [16] Additional points if the typing incorporates random, but likely
          misspellings. Write the code so that for any given letter, the typist
          has a 1% chance of hitting a letter key which is adjacent (up, down,
          left, right) to the target key (e.g. hitting 't' instead of a target
          'y').

6. File copy with progress bar.
     [32] Write a program to copy a file byte-wise. It should take in two 
     filenames via stdin: the source file and the destination file. 
     Furthermore, during the copy it should show a progress bar on a single 
     line. Call this ``file-copy.cpp``.

7. ASCII animation.
     [32] Write a program to print a colored animation to the screen.  Use the
     provided ``color.h`` [4] and refer to ``color.cpp`` for example.  The
     animation should be 25 rows x 60 cols [4], have a framerate of 30 Hz [4],
     last for exactly 10 seconds [4], use at least three colors [8], be such
     that no two consecutive frames in the animation are the same [8], and be
     unique [-32].  Call this ``asciimation.cpp``.
