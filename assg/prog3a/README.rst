Homework 3
==========

Select up to 64 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
10/02/16 at 6:00 PM).

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
            pages at a time, and only flood the physical memory available on
            the system (you will need to use ``sysconf`` to determine this). In
            this case, the program becomes beneficial, as it can be used to
            clean out unused memory.  You must save the pointers returned by
            ``calloc`` so as to free them before exiting. In this case call the
            program ``clean-out.cpp``.


3. Asciimation.
     [16] If you still haven't done ``asciimation.cpp``, you may do it now for
     one-quarter of the original credit.  It will be graded according to the
     same specification, and the total will be cut by half.  This is your last
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


7. A class of your own design.
     [16] Create a class for anything you want.  It should have at least two
     fields, two accessors, two mutators, and a constructor.  Create both a
     header ``myclass.h`` and a source ``myclass.cpp``.  In a file
     ``mydemo.cpp``, demonstrate the creation of your class and manipulation of
     its fields.

       a. A subclass of this (is-a relationship).
            [8] Additional points if you create a subclass of your class and
            likewise have two fields for it, with two accessors, two mutators,
            and a constructor.  Create both a header ``mysubclass.h`` and a
            source ``mysubclass.cpp``.  In ``mydemo.cpp``, demonstrate the
            creation of your subclass and manipulation of its fields in
            addition to that of your superclass.

       b. A class object belonging to your class (has-a relationship).
            [8] Additional points if you create another class and likewise have
            two fields for it, with two accessors, two mutators, and a
            constructor.  This class (call it B) should be a field of your
            original class above (call it A), such that A has-a B. Create both
            a header ``encapsulated.h`` and a source ``encapsulated.cpp``.  In
            ``mydemo.cpp``, demonstrate the manipulation of your encapsulated
            class fields as well.


8. Video game characters.
     [16] Create a class for a character in a video game, called ``Character``.
     It should have at least two fields, two accessors, two mutators, and a
     constructor.  Create both a header ``character.h`` and a source
     ``character.cpp``.  In a file ``game.cpp``, demonstrate the creation of a
     character.

       a. Equipping characters with weapons and armor.
            [16] Additional points if you create ``Weapon`` and ``Armor``
            classes, and have these as fields of your ``Character`` class (a
            has-a relationship).  This way, your character can "equip" weapons
            and armor. Write methods ``void Character::equip(Weapon w)`` and
            ``void Character::equip(Armor a)`` for your ``Character`` class.
            Create a weapon and armor for your character in ``game.cpp``, and
            use the equip methods to equip them.  Create both the headers
            ``weapon.h`` and ``armor.h`` and source files ``weapon.cpp`` and
            ``armor.cpp``.

       b. Monsters.
            [16] Additional points if you create a ``Monster`` class which
            inherits properties of ``Character`` (an is-a relationship), but
            also has some of its own methods (such as a method ``void
            Monster::AI()``, or a object field ``Item`` which can be gotten
            from beating it, etc.).  Demonstrate the creation of two instances
            of ``Monster`` in your ``game.cpp``.  Create both the header
            ``monster.h`` and the source ``monster.cpp``.

              i. A simple game utilizing both such classes.
                   [16] Create a simple text-mode game using your ``Character``
                   class in which a user-generated character (the user gets to
                   choose the character's attributes) battles against other
                   instances of the ``Monster`` class in turn-based combat.
                   Put this in ``game.cpp``.  Your game shall suffice as a full
                   demonstration of the aforementioned classes.




