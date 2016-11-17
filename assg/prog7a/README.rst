Homework 7
==========

Select up to 64 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
11/27/16 at 6:00 PM).


1. Operating Systems: Process creation.
     [16] Write a code which accepts a command-line argument n and forks a
     child process.  The parent should calculate the product of numbers 1 to n
     and the child should calculate the sum of numbers 1 to n. Separate your
     sum and product codes into functions.  Call this ``fork.c``. It should
     be written in C.


2. Operating Systems: System calls.
     [16] Write a code similar to ``cp`` which works for files. It should
     accept a source file as its first argument and a destination file as its
     second.  It should use only section-2 functions ``open(2)``, ``close(2)``,
     ``read(2)``, and ``write(2)`` to copy a the source file to the
     destination.  Call this ``cp.c``. It should be written in C.


3. Computer Architecture: Assembly language.
     [16] Obtain the assembly for a function ``int product(int n)`` using the
     ``gcc`` compiler (use the ``-S`` flag).  Strip it down into an assembly
     code called ``product.s``. Create a ``main.c`` code which calls the
     function ``product`` defined in your assembly file (it must not be defined
     in ``main``!).  Create a ``Makefile`` to compile ``main.c``, linking
     against the assembly ``product.s``. Your ``main.c`` should be written in
     C.


4. Computer Architecture: Bitwise operators.
     [16] Learn about the cost-efficient **bitwise operators** ``&``, ``|``,
     ``~``, ``<<``, and ``>>``. Then using only these operators, write
     in a file ``bitwise.c`` the functions:

       * ``int pow2(int n)``: returns 2^n.
       * ``int mul2(int n)``: returns 2/n.
       * ``int div2(int n)``: returns 2*n.
       * ``bool odd(int n)``: returns 1 if odd, 0 otherwise.

     Also demonstrate them in your ``main`` function.


5. Algorithms: Sorting algorithms.
     [16] Create a library of sorting algorithms. Include in it the following:

      * ``void bubbleSort(int *a, int n)``
      * ``void insertionSort(int *a, int n)``
      * ``void selectionSort(int *a, int n)``

     Name your source ``sort.cpp`` and header ``sort.h``; include a demo code
     ``demo.cpp`` and ``Makefile``.


6. Algorithms: Permutations.
     [16] Read about **permutations** on-line.  Then write a function ``void
     permutations(std::string s)`` which generates all permutations of a string
     and prints them to stdout.  Call this ``permute.cpp``.  Demonstrate the
     function in your ``main`` function.


7. Programming Languages: Interpreters.
     [16] Write an interpreter for a simple calculator. It should support
     statements of the type ``<float> <op> <float>`` and output the result.
     ``<op>`` can be any of ``+``, ``-``, ``*``, ``/``, and ``%``.  Call
     the file ``calc.cpp``.


8. Programming Languages: Hash maps and function pointers.
     [16] See ``src/map.cpp`` which creates a map of strings to function
     pointers, creating an generic interpreter that can call functions by name
     without the use of if/else structures. Add support to this for functions:

       * ``void *fib(void *n)``: gives nth Fibonacci number
       * ``void *fact(void *n)``: gives n!
       * ``void *isprime(void *n)``: tells if n is prime
       * ``void *digits(void *n)``: gives number of digits in n

     Call the file ``map.cpp``.

