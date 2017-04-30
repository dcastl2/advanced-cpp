Elementary Codes
================

*   Write the code ``float euler()``, which should calculate Euler's number.
    Euler's number is equal to the infinite sum of 1/n! for n=0 to infinity,
    but it is sufficient to stop at n=50 for floating-point precision.

*   Write the code ``int digs(int n)`` to calculate the number of digits in the
    integer n.  For example digs(2357) should return 4, since 2357 has 4 digits.
    Account for the fact that 0 is single-digit, thus digs(0) should return 1.

*   Write the function ``int pow(int a, int n)`` to calculate a^n in log(n)
    time, assuming that n is a power of 2.

*   Write a function called ``int digp(int n)`` which calculates
    the digital product of a number.  The digital product of a number is 
    the product of the digits; the process is re-applied until it yields a 
    single-digit number.  



Command-Line Arguments
======================

*   Write a code to accept an integer n as a command-line argument and output
    n!.  If and only if n is not entered as a command-line argument, the user
    should be prompted for it via stdin. 

*   Write a full C++ program which accepts an integer as a command line
    argument, verifies that it is positive, then outputs "true" if it is
    a Fibonacci number, "false" otherwise.
    



Libraries
=========

*   Write a full header, library source, Makefile, and demonstration code for
    the functions ``int mth::sum(int n)`` and ``int mth::factorial(int n)``.
    Implement the most efficient versions of these functions.



Pointer Puzzles
===============

*  Give the output of the following code:

   .. raw::

		int  a[6]  = {0, 1, 3, 7, 15, 0};
		int *a_ptr = a;
		while ( (*(++a_ptr))++ );
		for (int i=0; i<5; i++)
			std::cout << a[i] << std::endl;

*  Give the output of the following code:

   .. raw::

		int  a[5]     = {3, 2, 1, 0, 4};
		int *a_ptr[5];
		for (int i=0; i<5; i++) 
			a_ptr[i] = a+a[i];
		for (int i=0; i<5; i++)
			std::cout << *a_ptr[i] << std::endl;

*  Give the output of the following code:

   .. raw::

		int  a[6]  = {0, 2, 3, 4, 5, 0};
		int *a_ptr = a;
		while (*(++a_ptr) != 0)
						 (*a_ptr)--;
		for (int i=0; i<5; i++)
			std::cout << a[i] << std::endl;


Classes
=======

*  Create a class header with two private fields, two constructors (one
   default), two accessors, two mutators.

*  Provide an implementation file for the above class.

*  Demonstrate the instantiation of an object of this class.  Show 
   instantiation of objects in two ways: with a pointer, and without.



Inheritance
===========

*  Write a simple header for classes A and B, where A has-a B; and a 
   separate simple header for C and D, where C is-a D.

*  Be able to answer multiple choice questions about inheritance.



Polymorphism
============

*  Assuming that you have the following struct, write a function that overloads
   the addition operator (+).

   .. raw::
   
     struct fraction {
       int numerator;
       int denominator;
     };

*  Assuming that you have the following struct, write a function that overloads
   the stream insertion operator (<<).  Here, coeffs containst the coefficients
   of a size-n polynomial expression.  coeffs[2] would be the coefficient for
   x^2, and coeffs[0] is the constant. 

   .. raw::
   
     struct polynomial {
       int *coeffs;
       int n;
     };

   So for example in the following scenario:

   .. raw::
   
     coeffs[0] = 2;
     coeffs[1] = -3;
     coeffs[2] = 5;
     coeffs[3] = 7;

  The following would be output by the stream insertion operator:

   .. raw::

     7x^3 + 5x^2 - 3x + 2


*  Write a generic function ``T sum(T *a, int n)``, which returns the sum
   of the elements in the size-n array a.

*  Write a generic function ``T dot(T *a, T *b, int n)`` which calculates the
   dot product of two arrays of any type.

*  Write a generic function ``V *copy(U *a, int n)`` which copies the elements
   of the type-U array a into a new array of type V.  You must allocate memory
   for the new array.



Data Structures
===============

*  Write the class method ``Node *Node::reverse()``, which reverses a linked
   list and returns a pointer to the new head of the list.

*  Write the function ``Node *Node::lRotate(int k)``, which left-rotates a linked
   list by k elements in O(n) time.

*  Write the function ``Node *Node::rRotate(int k)``, which right-rotates a
   linked list by k elements in O(n) time.

*  Write the function ``void Stack::upRotate(int k)`` to up-rotate the stack
   by k elements.

*  Write the function ``void Stack::downRotate(int k)`` to down-rotate the 
   stack by k elements.

*  Write the function ``Stack *Stack::reverse()`` to return a pointer to
   the reverse of a stack. It must not destroy the original.

*  Write the function ``bool isSorted(Stack s)``, to test if the integer keys 
   in the stack are sorted from top to bottom.

*  Write the function ``int range(Queue *q)``, to return the difference between
   the maximum and minimum keys in the queue.  The integrity of the queue 
   should be maintained upon exit from the function.

*  Write the function ``void insert(Queue *q, int k)``, to insert the key into
   the queue, assuming the queue is sorted (head-to-tail), such that the
   insertion maintains the sorted ordering of the queue.  Upon return from
   the function, the head should point to the node with the minimum key.
   
*  Write the function ``bool isPermutation(Queue p, Queue q)``, to test if all
   of the keys which appear in p also appear in q.  You may assume all of the
   keys are unique.

*  Write a function ``void swap(Queue *q, Stack *s)`` which exchanges the
   contents of the queue and the stack.  Stack elements are enqueued as
   they are popped off, and pushed on as elements of the queue are dequeued.




Recursion
=========

*  Write a recursive code ``int pow(int a, int n)`` to calculate
   a^n recursively.

*  Write a recursive code ``int zeno(int n)`` to calculate n + n/2 + n/4 + 
   n/8 ... 0, that is the sum of the number n successively halved until 
   integer math resolves the final division into 0.  So for example zeno(8)
   would be 8 + 4 + 2 + 1 + 0 = 15.

*  Write a code that recursively calculates ``float sqrt(float n)``, without 
   invoking the sqrt function from math. It should be accurate within 1e-2, 
   such that if your answer is x, then abs(n-x*x) < 1e-2.

*  Write the code ``int digs(int n)`` to recursively calculate the number of 
   digits in the integer n.  For example digs(2357) should return 4, since 2357 
   has 4 digits.  Account for the fact that 0 is single-digit, thus digs(0) 
   should return 1.

*  Write the recursive function ``float fraction(int n)`` to calculate
   the continued fraction 1 / (2 / (3 / ... n.  For example if n=5, it 
   would calculate 1 / (2 / (3 / (4 / 5))).



Recursion on Data Structures
============================

*  Write a recursive method ``int Node::size()`` to calculate the size of
   a linked list. 

*  Write a recursive method ``bool Node::isSorted()`` to tell if the keys of
   a linked list are sorted in ascending order.

*  Write a recursive method ``void Stack::drop()`` which removes the bottom 
   node from the stack.

*  Write a recursive function ``bool isSorted(Stack *s)`` tells if a stack 
   s is sorted top-to-bottom.  The integrity of the stack should be maintained
   upon return of the function.

*  Write a recursive function ``int min(Queue *q, int n)`` which returns the
   minimum of the queue.  The parameter n is the nth recursive call to min,
   and is initially 0.

*  Write a recursive function ``void reverse(Queue *q)`` to reverse the queue
   q.

*  Write the function ``int TreeNode::sum()`` to sum the keys inside
   a subtree of a BST. 

*  Write the function ``int TreeNode::height()`` to determine the 
   height of a subtree of a BST. 

*  Write the function ``int TreeNode::size()`` to determine the 
   size of a subtree of a BST. 

*  Write recursive methods ``void Tree::reverse()`` and ``void 
   TreeNode::reverse()`` which reverse a BST.  The reverse R of a binary
   search tree called T is such that the in-order traversal of R is the 
   reverse of the in-order traversal of T.

*  Write recursive method ``bool TreeNode::isBalanced()``, which returns
   true only if the heights of the left and right subtrees differ by no
   more than 1.
