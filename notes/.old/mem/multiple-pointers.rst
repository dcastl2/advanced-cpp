Multiple Pointers
=================

Recall that a **pointer** is a reference to a memory address in an array.
Then a **double pointer** is a pointer to a pointer.  Below is a depiction
of a character double pointer, or (char **). 
.. raw::
                  -- char **a = malloc(6*sizeof(char *));
                /
               |
               v
           +-----------------------------------------------------+
           |        |        |        |        |        |        |
   addr    | 0xF34A | 0xF34B | 0xF34C | 0xF34D | 0xF34E | 0xF34F | 
           |        |        |        |        |        |        |
   addrs   | 0xA100 | 0xA200 | 0xA300 | 0xA400 | 0xA500 | 0xA600 |
           |        |        |        |        |        |        |
           +-----------------------------------------------------+
               |        |        |        |        |        |
               v        v        v        v        v        v
            kitties   death   bubbles   curses   snarky  obsessed


In the above, ``0xA100`` is an address which refers to the first element of the
character array ``kitties``, which is the letter ``k``.  Likewise ``0xA200``
refers to the ``d`` in ``death``.  These are pointers. In fact, these pointers
are part of an array of pointers.  There is furthermore a pointer to this array
of pointers ``char **a``, which is the double pointer (a pointer to a pointer).

To allocate memory for a double pointer, we must allocate for an array of
pointers:

.. code:: cpp

  char **a = (char **) malloc(n*sizeof(char *));

This code requests memory for n number of ``char *``, or character pointers,
and typecasts the return value of ``malloc`` to ``char **`` since that is the
type of ``char **a``.  But since the elements themselves are character
pointers, we must allocate memory for those.  Since there are many pointers to
allocate for, we must use a loop. Suppose we want to allocate 16 bytes for each
of the n ``char *``.

.. code:: cpp

  for (int i=0; i<n; i++)
    a[i] = (char *) malloc (16*sizeof(char));

Here, ``a[i]`` refers to the ith pointer in the array ``a``.  At this point in
time, ``a`` may be used as a 2D array: an 8x16 matrix (8 rows, 16 columns).
Therefore if we write 

.. code::cpp 

  a[1][3] = 't';

then we set the 4th character of the 2nd character array to ``t`` (in the above
illustrtion, this is the ``t`` in ``death``).  In the case of ``char *`` in
particular, we may use the function ``strcpy`` to copy into each character
array.

Many interesting data structures can be created this way, such as **jagged
arrays**, which are multi-dimensional arrays with non-uniform dimensions.  For
example, the 1st row of a jagged array may be of size 2; the 2nd row may be of
size 3; the 3rd may be of size 5; and so forth.
.. raw::
   0:  1 2
   1:  3 4 5
   2:  6 7 8 9 10
   3:  11 12 13 14 15 16 17
   ...

