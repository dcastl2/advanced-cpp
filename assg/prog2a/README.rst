Homework 2
==========

Select up to 64 points worth of problems.  

**Warning**. There are many pathways to zeros for this and later assignments,
so please read the following carefully.

**Makefile**. You must provide exactly one Makefile which handles all of the
compilation tasks.  Minimally, it must exist and make a substantive attempt at
compiling your projects.  If a Makefile is absent or insubstantive, the entire
assignment will earn an automatic zero.  If you supply more than one, the
assignment will earn a zero.  The grader will not grade your work [-64].  

**Script**. Furthermore, you must provide exactly one script named exactly
``run.sh`` which runs all of your programs in the order in which they appear in
the assignment specification, assuming they have been compiled with your
``Makefile``. If your script is absent or insubstantive, the assignment will
earn an automatic zero.  If you provide more than one script, the assignment
will earn a zero.  As above, the grader will not grade your work [-64].

If your ``Makefile`` or your ``run.sh`` script causes damage to anything on the
server, whether intentional or accidental, the assignment will earn a zero
[-64].

You must distinguish precisely between command-line arguments and input from
stdin in this assignment.  Command-line arguments are not inputs from stdin
(i.e. input taken from std::cin).  If you accept input from stdin rather than
command-line arguments where it is explicitly specified that input should be
taken from command-line arguments, the problem will earn a zero.

You must know the precise definition of the term "interpreter". If you code for
an interface which is not an interpreter, the problem will earn a zero.


1. Improved sleep.
     [16] Write a program which accepts a floating-point number as a
     command-line argument [-16], then delays for that number of seconds (use
     the ``usleep`` function) [4].  In addition, it should show a progress bar
     indicating the time left (which should update on a single line; use
     carriage return to re-print it). Your progress bar should update every
     quarter-second [4]. Call the program ``sleep.cpp``. Verify that the input
     is correct (it can only be non-negative integer or float) [4]. Be sure
     that when you call the program to distinguish it from the system program
     ``sleep`` [4]


2. Quick dictionary.
     [16] Write a program which accepts a term as a command-line argument
     [-16].  The program should scan the provided file ``dictionary.dat`` for
     the term [4], then print the definition to ``stdout`` [4]. If the term
     does not exist in the dictionary, then it should print a message which
     says "Term not found" [4]. Color the terms using ``color.h`` [4]. Call
     this ``define.cpp``.


3. A calculated drawing.
     [16] Write a program which draws an object in color using ``color.h`` and
     control structures.  The drawing should be at least 8 rows by 16 columns
     [4].  The drawing must make use of at least three colors [4].  It must
     depict a clearly identifiable material object, which must be asymmetric
     [4].  The total drawing must be achieved by one double-for loop [4].  Call
     this ``calc-drawing.cpp``.  If you do the coloration library (below), you
     may utilize it for this problem.  


4. File encryption.
     [32] Write a program which accepts a filename as a command-line argument
     [-32].  It should then ask for a password via stdin (but it should not
     visible when entered; use ``getpass`` for this) [4].  The program should
     encrypt the file using a block-cipher algorithm (see ``encryption.rst``
     for details) [12] if it was not already encrypted by the program, and
     rename it with a ``.enc`` extension.  If it was already encrypted, it
     should decrypt the file and remove the ``.enc`` extension [12].  Under no
     circumstance should the program multiply encrypt the file [4].  Call the
     program ``encrypt.cpp``.


5. A library for rolling dice.
     [16] Create a library, complete with source file ``dice.cpp`` [2], header
     ``dice.h`` [2], makefile ``Makefile`` [2], and a main code ``main.cpp``
     [2]. The library should contain functions:
     
     * [2] ``void di::seed()``, which seeds the random number 
       generator.
     
     * [2] ``int di::random(int a, int b)``, which obtains a random number in 
       range [a, b].

     * [4] ``int di::dice(int A, int X, int B)`` which obtains a random number
       by rolling the dice AdX+B.  See the following article on dice notation
       for precisely what this means.  Note that you must generate random
       numbers for all X dice.

        https://en.wikipedia.org/wiki/Dice_notation

       a. An interpreter for this library.
            [16] Create an interpreter [-16] which can accept commands ``seed``
            [2] ``random`` [2], and ``dice`` [4], and print out random numbers
            from the invocation of these functions.  It should accept commands
            from file, if a filename is given as a command-line argument; else
            it should accept them from stdin [6].  Call this 
            ``dice-interpreter.cpp``.

       b. An application utilizing this library.
            [16] Create a miniature game in which a player-controlled character
            with 3d6+4 hit points and a weapon that does 1d6+1 damage battles a
            goblin with 2d6+2 hit points and a weapon that does 1d4+2 damage
            [4].  This game shall take the form of a command interpreter [-16].
            Your game should support two commands: ``attack``, which attacks
            with your weapon [4], and ``item``, which allows you to consume a
            potion that heals 2d6+1 of your hit points, which you only have one
            of during the course of the game [4].  Your current hit points
            cannot exceed your max.  The game ends when either you or the
            goblin reach <=0 hit points [4].  Call this ``dice-game.cpp``.
            Your game does not need to accept commands from a file.

            i. Improvements to this application.
               [16] Give your character a spell that does 2d6 damage and has 3
               charges, to be accessed with the ``spell`` command [4].  Also,
               output all messages in a typed-out fashion as per the code from
               ``typeout.cpp`` [4].  Use color in your output messages and
               prompts, utilizing the file ``color.h``; you should make use of
               at least four distinct colors in your interface [4].  Allow your
               character to fight three goblins in succession until character
               death or all goblins are defeated [4].  Should you choose to do
               the improved version, call this ``improved-dice-game.cpp``
               instead.  Use iterative structures (loops) where possible; avoid
               redundant code [-16].


6. A library to simplify coloration.
     [16] Create a library, complete with source file ``colors.cpp`` [4],
     header ``colors.h`` [4], makefile ``Makefile`` [4], and a main code
     ``main.cpp`` [4]. The library should have an enum datatype called
     ``color``, which references colors.  It should contain all the colors
     referenced in my own ``color.h`` header.  The library should contain
     functions:

     * ``void clr::set(color c)``, which sets the color by printing its
       code to stdout, so that other print functions to follow (such as
       printf) will print in that color.
     
     * ``void clr::print(color c, std::string s)``, which prints a string
       s in the color c, then sets the color back to white; and

     * ``void clr::frame(useconds_t usec)``, which does the following,
       in order: writes a flush to stdout, delays for usec number of
       seconds, then clears the screen.

       a. An interpreter for this library.
            [16] Create an interpreter [-16] which can accept the commands
            ``set`` [2], ``print`` [4] and ``frame`` [2], which respectively
            print out colorized text and display a frame for the specified
            number of microseconds.  Your interpreter should be able to accept
            commands from a file if a filename is given as a command-line
            argument; otherwise it should take commands from stdin [6].  Call
            this ``colors-interpreter.cpp``.

       b. An application utilizing this library.
            [16] Create a text-based animation called ``asciimation.cpp`` which
            utilizes your library.  You may do another asciimation if you did
            one before, but your new one must be unique [-16].  The rules of
            the previous asciimation problems apply.  Your code must utilize
            your library functions; that is, your functions must provide the
            sole interface to text coloration [-16].

