Robust Verification of Input
============================

**Input verification** refers to the checking done on user input to ensure that
it is useable for its intended purpose.  This may include checking the type of
the input; or that the input data fits within the boundaries of what is
allowed; or that the input data is otherwise consistent with any functions that
may handle it.  The verification of input data often involves challenging the
assumptions that were previously made by the programmer.  An an example,
consider the function sum:

.. code:: cpp

   int sum (int n) {
     return (n*(n+1)/2);
   }

This function makes a couple of key assumptions.  First, it assumes that n
is non-negative.  However, it is possible for a negative number to be input
to the program, and for the function to return a negative number.  One remedy
is to constrain the type of the function, or else to introduce a check to
ensure that n>=0.

.. code:: cpp

   unsigned int sum (unsigned int n) {
     return (n*(n+1)/2);
   }

Another less-obvious assumption is that the value which is returned can be held
by an unsigned integer (usually 4 bytes).  For an unsigned integer, this is
4,294,967,295.  For n as low as 92,682, we can exceed this value and cause an
**overflow error**.  Thus we might also check to make sure that the input n is
within bounds.  Some things which are routinely important to check:

 * the non-emptiness of inputs
 * the existence and permissions of files
 * the allowed range of input data

For error-checking, there are a few options:

 * if-statements
 * C assertions
 * C++ try/catch

Generally speaking, the most robust error-checking mechanism is **try/catch**
because it allows for generalized and graceful handling of errors, but it may
not be appropriate for all situations.  In try/catch, the program will try to
execute some code; but if there is an error, a message will be thrown to a
catch block where it will be handled.  The try/catch mechanism is somewhat
cumbersome in that it requires extra code.  Throws are computationally
expensive.  Still, it is the preferred method of error-handling in C++ code.

C **assertions** test a conditional and terminate the program if that condition
is false. They are good to use during development, but generally should not be
present (or at the very list, be triggered) in production code.  Assertion
error messages are not user-friendly.  Assertions are an old mechanism, but
backwards-compatible with C.

General tips for error handling:

 * Fail gracefully; stop program execution only when necessary
 * Print user-friendly error messages 
 * Consider input verification before/during other code writing
