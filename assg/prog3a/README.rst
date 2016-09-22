Homework 3
==========

Select up to 64 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
09/25/16 at 6:00 PM).

I will award stickers for exceptional work, including: colorized output,
progress bars, well-formatted code, clever solutions, etc.


1. Your very own pointer puzzle.
     [8] Devise a puzzle that uses a pointer to obfuscate the printing of a
     sequence of numbers.  It should be unique.  Be creative; do not simply rip
     mine off and change it slightly [-8]!  Call this ``puzzle.cpp``.


2. A malloc bomb.
     [8] A **malloc bomb** is a program which continually requests memory until
     the system cannot allocate any more.  On most systems, it will cause an
     eventual crash.  Write a malloc bomb, but do not execute it on my server
     [-64]!  Call it ``malloc-bomb.cpp``. 

       a. Cleaning out memory.
          [8] Additional points if you use calloc instead and allocate for 4K
          pages at a time, and only flood the physical memory available on the
          system (you will need to use ``sysconf`` to determine this). In this
          case, the program becomes beneficial, as it can be used to clean out
          unused memory.  You must save the pointers returned by ``calloc`` so
          as to free them before exiting; for this you need to use a
          double-pointer, and use ``realloc`` to expand its size as needed.  In
          this case call the program ``clean-out.cpp``.


3. Asciimation.
     [16] If you still haven't done ``asciimation.cpp``, you may do it now for
     one-quarter of the original credit.  It will be graded according to the
     same specification, and the total will be cut by four.  This is your last
     chance to do this problem for credit.


4. File encryption.
     [16] If you did not already do ``encrypt.cpp``, you may do it now for
     half the original credit.  It will be graded according to the same
     specification, and the total will be halved.


5. Saving and loading arbitrary memory contents to file.
     [16] If you allocate memory on the heap, you may save such data to file,
     then re-load it for later use.  This can be quite useful, for example
     if you want to save and load data for a video game.

     The program ``save.cpp`` allocates memory for an array of ``struct
     character`` data on RPG characters, then saves the data to a binary file
     called ``characters.bin``.  Complete the program ``load.cpp`` which should
     read the ``struct character`` array data from ``characters.bin`` back into
     memory, then print the character data to stdout using the provided
     ``print`` function.


6. Statistics on an arbitrary number of given numbers.
     [16] Write a program which can accept via stdin any number of integers,
     line-by-line.  Load these into an array (use ``realloc`` to control the
     size). Then output the max, min, and median of the set of integers.  The
     user should be able to type ``quit`` to quit entering numbers and see
     the results.  Call this ``stats.cpp``.


7. Word frequency analysis.
     [32] Write a program which can accept via stdin any number of words until
     the user types ``quit``.  Load the words into an array (use ``realloc`` to
     control the size).  Then output the words in alphabetic order and give
     the number of times the word was used.  Call this ``frequency.cpp``.

