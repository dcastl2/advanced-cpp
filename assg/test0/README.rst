For the preliminary exam, I will give 8 problems, each worth 8 points.  Unless
otherwise specified, assume that a solution will receive half of the credit if
it compiles, and half if it is logically correct.  Be wary of missing
semicolons, parentheses, and braces.  Minor syntax errors cause the code not to
compile. If a code requires a function, write the total function (include the
signature and braces).

The following problems are for practice.  To practice, try writing the codes on
a blank piece of paper and checking them against your solution.  Make sure to
obtain the correct solution first (write, compile, and check the programs). 



1. Hello, world!
     Write a "Hello, world!" program.

2. Sign.
     Write the function ``int sign(int n)`` which should return 1 if n is
     positive, -1 if n is negative, and 0 if n is zero.

3. Parity.
     Write the function ``bool odd(int n)`` which returns false if n is evenly
     divisible by 2, true otherwise.  Zero is taken to be even.

4. Sum.
     Write the function ``int sum(int n)``, which should return the sum of
     integers from 1 to n.

5. Reverse.
     Write the function ``std::string reverse(std::string s)`` which should
     return the reverse of the string ``s``. You may use the library functions
     std::swap and std::string::size, but no others.

6. Sum of an array of integers.
     Write the function ``int sum(int a[], int n)`` which returns the
     sum of the integers in the size-n array a.

7. Multiplication table. 
     Write a function ``void multi_table(int n)`` to print an n-by-n
     multiplication table (starting with 1). Use ``std::setw(4)`` to set a
     width of 4 between numbers in a row, and put a line break after each row.

8. Prime numbers.
     Write the function ``bool is_prime(int n)`` which returns true if n is
     prime, false otherwise.  A number is prime iff it is not evenly divisible
     by any smaller number greater than 1.



I **will** change small parts of the problems to check understanding, so it is
imperative to understand the codes.  

For example, I might ask you to write a function which returns true of a given
``n`` is even, rather than odd.  Or, I may ask you to write a function to test
if a number is composite; or to give the product of an array of floating-point
numbers; or to return the minimum character in a string.  You must be able to
extrapolate beyond these problems to solve similar, albeit new ones.

The solutions for these problems appear in the ``src/`` directory; but try
them first on your own.

