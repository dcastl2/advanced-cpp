Homework 2
==========

Select up to 64 points worth of problems.  For this time only, you may earn
+N extra credit points if you submit the assignment N<=8 days in advance of
the due date (Sunday, 09/18/16 at 6:00 PM).

Binaries to come.


1. Improved sleep.
     [16] Write a program which accepts a floating-point number as a
     command-line argument, then delays for that number of seconds (use the
     ``usleep`` function).  In addition, it should show a progress bar
     indicating the time left (which should update on a single line; use
     carriage return to re-print it). Your progress bar should update every
     quarter-second. Call the program ``sleep.cpp``. Verify that the input is
     correct (it can only be non-negative integer or float). Be sure that when
     you call the program to distinguish it from the system program ``sleep``.


2. Quick dictionary.
     [16] Write a program which accepts a term as a command-line argument.  The
     program should scan the provided file ``dictionary.dat`` for the term,
     then print the definition to ``stdout``. If the term does not exist in the
     dictionary, then it should print a message which says "Term not found."
     Call this ``define.cpp``.


3. File encryption.
     [32] Write a program which accepts a filename as a command-line argument.
     It should then ask for a password via stdin (but it should not visible
     when entered; use ``getpass`` for this).  The program should encrypt the
     file using a block-cipher algorithm (see ``encryption.rst`` for details)
     if it was not already encrypted by the program, and rename it with a
     ``.enc`` extension.  If it was already encrypted, it should decrypt the
     file and remove the ``.enc`` extension.  Call the program ``encrypt.cpp``.


4. Time/date library.
     [16] Create a library, complete with source file ``clock.cpp`` [4], header
     ``clock.h`` [4], makefile ``Makefile`` [4], and a main code ``main.cpp``
     [4]. The library should contain functions ``void clk::time()`` and ``void
     clk::date()``, which print the time and date, respectively. 

       b. An interpreter for this library.
            [16] Create an interpreter which can accept commands ``time``
            and ``date``, and print out the time and date using calls to your
            library functions.


5. Note-taking library.
     [16] Create a library, complete with source file ``note.cpp`` [4], header
     ``note.h`` [4], makefile ``Makefile`` [4], and a main code ``main.cpp``
     [4]. The library should contain functions ``void note::write(std::string
     s)`` and ``void note::read(std::string s)``, which write and read notes to
     files named after the current time: ``yyyyMMddhhmm.note``. The ``write``
     function should write a string out to such a file.  The ``read`` function
     should locate and output such notes.

       a. Color support for the notes.
            [8] Additional points if the note output supports color markers 
            as per the ``color-cat.cpp`` program.

       b. More flexibility for querying notes.
            [8] Additional points if your ``read`` function support partial
            beginning matches to filenames, such that when ``2016`` is supplied
            as an argument, it prints out all notes from that year; or if
            ``201609`` is entered, it prints out all notes from September 2016.
     
       c. An interpreter for this library.
            [16] Create an interpreter which can accept commands ``write`` and
            ``read``, and print out the write and read using calls to your
            library functions.


