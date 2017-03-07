Homework 4
==========

Select up to 64 points worth of problems. 

**NOTE**: you must provide a Makefile [-64] and a run.sh script [-64] with this
submission.


1. Yet another class of your own design.
     [16] You may repeat this problem even if you completed it for Homework 3,
     but your solution must be distinct.

     Create a class for anything you want.  It should have at least two fields,
     two accessors, two mutators, and a constructor.  Create both a header
     ``myclass.h`` and a source ``myclass.cpp``.  In a file ``mydemo.cpp``,
     demonstrate the creation of your class and manipulation of its fields.

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



2. More video game characters (RPG style).
     [16] You may do this problem only if you didn't already complete it for
     Homework 3.  If you did it for Homework 3, you have the opportunity to
     extend it (see #3 below).
     
     Create a class for a character in a video game, called ``Character``.  It
     should have at least two fields, two accessors, two mutators, and a
     constructor.  Create both a header ``character.h`` and a source
     ``character.cpp``.  In a file ``rpg.cpp``, demonstrate the creation of a
     character.

       a. Equipping characters with weapons and armor.
            [16] Additional points if you create ``Weapon`` and ``Armor``
            classes, and have these as fields of your ``Character`` class (a
            has-a relationship).  This way, your character can "equip" weapons
            and armor. Write methods ``void Character::equip(Weapon w)`` and
            ``void Character::equip(Armor a)`` for your ``Character`` class.
            Create a weapon and armor for your character in ``rpg.cpp``, and
            use the equip methods to equip them.  Create both the headers
            ``weapon.h`` and ``armor.h`` and source files ``weapon.cpp`` and
            ``armor.cpp``.

       b. Monsters.
            [16] Additional points if you create a ``Monster`` class which
            inherits properties of ``Character`` (an is-a relationship), but
            also has some of its own methods (such as a method ``void
            Monster::AI()``, or a object field ``Item`` which can be gotten
            from beating it, etc.).  Demonstrate the creation of two instances
            of ``Monster`` in your ``rpg.cpp``.  Create both the header
            ``monster.h`` and the source ``monster.cpp``.

              i. A simple game utilizing both such classes.
                   [16] Create a simple text-mode game using your ``Character``
                   class in which a user-generated character (the user gets to
                   choose the character's attributes) battles against other
                   instances of the ``Monster`` class in turn-based combat.
                   Put this in ``rpg.cpp``.  Your game shall suffice as a full
                   demonstration of the aforementioned classes.


3. More video games (adventure style).
     [16] Create a video game to navigate a character along a 2D map, utilizing
     classes to represent the map.  Create a class ``Map`` which has-a 2D array
     of ``Tile`` objects. The ``Map`` also has a ``Player`` object to store the
     location of the player character.  Create files ``map.h``, ``map.cpp``,
     ``tile.h``, ``tile.cpp``, ``player.h``, ``player.cpp``.

     The game must have an interpreter which accepts minimally the commands
     ``north``, ``south``, ``east``, and ``west`` which re-print the map with
     the player character's updated position.
     
       a. More complex maps.
           [16] Create a ``Treasure`` class and files ``treasure.h`` and
           ``treasure.cpp``.  Then modify ``Tile`` so that each ``Tile`` object
           has-a ``Treasure`` object, which may be ``NULL`` if no treasure is at
           that tile.  Also modify ``Character`` such that it in turn has-a
           ``Treasure`` array (call it ``inventory`` or so).  
           
           Add support for a command ``search``, which should search for
           treasure at the tile the player is standing on.  If there is
           treasure, it should be added to the player's inventory and removed
           from that tile.
       

           i. A bi-modal game.
                [32] If you already completed #2 of this homework in its
                entirety for Homework 3, you may integrate your solution for it
                into this map world.  Your game should thus have two modes: an
                overworld and a battle mode.  The overworld should randomly
                trigger battles when your character moves across tiles.

                Add an experience system so your character gains levels, and
                otherwise make it possible for the game to be played
                indefinitely.  Call this ``mygame.cpp``.

                If you complete this, you will get a feeling for what it is
                like to be a video game programmer!


4. A vector class.
     [16] Create a class ``Vector`` with floating-point fields ``x``, ``y``,
     and ``z``, with accessors, mutators, and constructors for these.  Also
     create methods 

     * ``Vector Vector::add(Vector u)`` 
     * ``float  Vector::dot(Vector u)`` 
     * ``Vector Vector::cross(Vector u)`` 


     Create a header ``vector.h`` and source ``vector.cpp``.  Demonstrate the
     functions in the file ``vector-ops.cpp``.

       a. Translations to and from polar coordinates.
           [16] Additional points if the following methods are implemented:

           * ``float  Vector::radius()`` 
           * ``float  Vector::theta()`` 
           * ``float  Vector::phi()`` 
           * ``Vector Vector::Vector(float radius, float phi, float rho)`` 

           That is, the methods ``radius``, ``theta``, and ``phi`` should give
           the magnitude ``radius`` the polar angle ``theta``, and the
           azimuthal angle ``phi``. In addition, a constructor should be added
           such that when these values are supplied, a Cartesian vector is
           created.  Demonstrate these also in ``vector-ops.cpp``.

       b. Make it generic and overload operators.
           [16] Additional points if you make the class generic.

           Also, instead of defining ``add``, overload the ``+`` operator;
           instead of ``dot``, overload ``*``; and instead of ``cross``,
           overload ``&``.  Demonstrate these as well in ``vector-ops.cpp``.



5. A matrix class.
     [16] You may be interested in this problem if you have taken or are taking
     MATH 2090.  Create a class ``Matrix`` with floating-point fields ``int
     **A``, ``int n``, and ``int m``.  Create the constructor:

     * ``Matrix::Matrix(int **A, int n, int m)`` 

     as well as the methods

     * ``Matrix Matrix::add(Matrix B)``
     * ``Matrix Matrix::mul(Matrix B)``

     which can perform addition and multiplication of matrices. Call the header
     ``matrix.h`` and the source ``matrix.cpp``, and the demonstration file
     ``matrix-ops.cpp``.

       a. Transposition, reflection.
            [16] Additional points if you define functions: 

            * ``Matrix Matrix::transpose(Matrix B)``
            * ``Matrix Matrix::reflect(Matrix B)``

            which obtain the transpose and reflection of a matrix.

       b. Make it generic and overload operators.
            [16] As with the vector problem above, additional points
            if you make the class generic.

            Also, instead of defining ``add``, overload ``+``; and instead of
            ``mul``, overload ``*``.  Demonstrate these in ``matrix-ops.cpp``.
            If you did ``reflect``, overload ``-``, and for ``transpose``,
            overload ``!``.

