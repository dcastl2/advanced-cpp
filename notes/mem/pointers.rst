Pointers and Dynamic Memory
===========================

A **pointer** is a reference to a memory address in an array.
.. raw::
           +-----------------------------------------------------+
           |        |        |        |        |        |        |
   addr    | 0xF34A | 0xF34B | 0xF34C | 0xF34D | 0xF34E | 0xF34F |
           |        |        |        |        |        |        |
   data    |   k    |   i    |   t    |   t    |   y    |  \0    |
           |        |        |        |        |        |        |
           +-----------------------------------------------------+
               _
              / \
               |
                \_______   int *a_ptr = a;

Think of a pointer as being an arrow which is drawn to a location where data is
stored. When a pointer is initialized, think of the arrow initially being
drawn;  when a pointer is re-assigned, think of the arrow being re-drawn to
point to the new location.

To initialize a pointer, we use the **address-of** operator (&) to refer to
the address of the datum we would like to point to. To indicate we are
declaring a pointer, we put an asterisk before the variable name of the
pointer. For example:

.. code:: cpp

   int  a     =  3;
   int *a_ptr = &a;

In this code, a is initialized to 3; but then a pointer is assigned to the
address of a (that is &a).  We don't know what the exact address is (although
it can be printed to the screen).  From hereon, we can use ``a_ptr`` to
reference either the memory address where the value of ``a`` is stored, and we
can access and modify the value of ``a`` itself.  To print the address:

.. code:: cpp

   std::cout << a_ptr;

To print the actual value of ``a``, we must use the **value-of** operator
before the name of the pointer to access the value:

.. code:: cpp

   std::cout << *a_ptr;

We can also increment the value:

.. code:: cpp

   (*a_ptr)++;

Now ``a`` holds the value 4. We can also perform arithmetic on the address:

.. code:: cpp

   a_ptr = a_ptr + 4;

This will make ``a_ptr`` point 4 bytes down from where the value of ``a`` is
stored (into some unknown location).  Thus pointers can give us precise control
over memory accesses.

Arrays as you know them are actually pointers to the first datum in consecutive
blocks of memory. Thus we may do the following:

.. code:: cpp

   int  a[5]  = {2, 3, 5, 7, 11};
   int *a_ptr = a;

Here, ``a_ptr`` points to 2, which is the first element of ``a``. Array values
are stored consecutively in memory, so if we were to do the following pointer
arithmetic operation, it would move ``a_ptr`` to the next block in memory:

.. code:: cpp

   a_ptr++;

Now ``a_ptr`` points to 3.  We can also use pointer arithmetic to loop through
an array just as we would with a counter. 
