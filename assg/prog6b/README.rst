EC Homework 6
=============

Select up to +8 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
11/20/16 at 6:00 PM).


1. Assembly language. 
     [+2] See ``src/sum.s`` for an example of x86 assembly.  Observe how it is
     compiled and linked with a C code in the example ``Makefile``.  Then write
     an assembly file ``square.s`` for a function ``int square(int n)``, which
     accepts in an integer n and returns n^2. 


2. Microsoft's C# language.
     [+2] Regardless of my sentiments, C# is still one of the most popular
     platform-specific languages.  It is worth learning if you plan to do
     any sort of Microsoft development.  Interestingly, Linux has utilities
     for developing in the language, and can even run executables written
     in Mono/.Net assembly.

     See ``hello.cs`` for an example of a Hello, world! program in C#.
     Write a program ``sum.cs`` with a function ``int sum(int n)`` to
     print the sum of numbers from 1 to 10.  Use the ``mcs`` compiler
     to compile it, and run the executable with the ``mono`` command.


3. LaTeX your homework.
     [+2] Choose a homework assignment for another STEM class you are taking.
     Then, do your homework writeup using LaTeX. You must make use of LaTeX's
     math typesetting capabilities. Call this ``homework.tex``. Submit only the
     LaTeX source.  You may repeat this problem yet again, but you have to
     choose a different homework assignment.


4. Password cracking by observation.
     [+3] See ``src/guess`` for an executable which accepts a password (15
     characters at most), then performs some calculation on it to determine if
     it is valid (there are several valid answers).  Use ``gdb`` to run the
     program and examine the assembly control flow to get an idea of how the
     program determines password validity.  Use instruction-level breakpoints.
     Once you figure out how it works, place three valid passwords in the file
     ``guess.txt`` with a short explanation of how the program checks for
     validity (in particular, give the necessary condition for validity).


5. Brute-force password decryption.
     [+3] If you didn't already, write a program ``crack.c`` to crack the
     password whose hash is contained in ``hash``, using the DES encryption
     algorithm.  You may assume that the password is exactly four lowercase
     characters long and that the salt consists of lowercase letters.
     
     To do this, you will need to call the function ``crypt()`` on all possible
     combinations of four-character passwords, then check if the hash returned
     by it is equal to the hash given in the file.  If the two hashes are
     equal, then the solution is the last-generated password.  See the manual
     page for ``crypt``.

     Your program should be written in C.


6. Recursive asciimations.
     [+4] Write a program to do a colored ASCII animation, but this time make
     the drawing function recursive.  It should be a calculative-type
     animation, where each frame is generated from a function; and the
     animation should be different from one you've done before.  Let it run for
     at least a hundred frames.  Call it ``asciimation.cpp``.


7. Queues in Haskell.
     [+5] Have a look at ``tree.hs``, which implements a binary search tree in
     Haskell.  Create a similar data structure for an integer queue.  Write
     functions ``enqueue``, ``dequeue``, ``lrotate``, and ``rrotate``.
     Demonstrate the queue functions in your main function.  Call this
     ``queue.hs``.

     Haskell is a notoriously difficult language to comprehend.  I would be
     impressed if anyone could do this.
