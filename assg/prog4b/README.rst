EC Homework 4
=============

Select up to +8 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
10/23/16 at 6:00 PM).


1. Port scanning.
     [+1] Write a BaSH script which can obtain the IP addresses of everyone
     currently logged into the server (use ``w -i`` and ``awk`` to isolate the
     IP information).  For each IP address, it should run ``nmap`` on the IP to
     scan all of the open ports on that machine.  Ensure that the timeout
     option to ``nmap`` is reasonable (give up on slow machines). Format the
     output neatly!  Call this ``scan.sh``.


2. CLI news headlines.
     [+1] Write a BaSH script which can obtain the news headlines from
     ``news.google.com``.  Use ``wget`` to obtain the page, then ``grep`` and
     ``sed`` to isolate them.  Call this ``news.sh``.


3. LaTeX your homework.
     [+2] Choose a homework assignment for another STEM class you are taking.
     Then, do your homework writeup using LaTeX. You must make use of LaTeX's
     math typesetting capabilities. Call this ``homework.tex``. Submit only the
     LaTeX source.  You may repeat this problem if you did it already, but you
     have to choose a different homework assignment.


4. Octave/MATLAB, a scientific computing language (linear algebra).
     [+2] The file ``system.txt`` contains a system of equations.
     The coefficients of the LHS of the equations makes up the matrix A,
     and the results on the right make up the column vector B. Write an
     octave script to: solve the equation Ax=B, print the determinant of
     A, print the inverse of A, and print the eigenvectors and eigenvalues
     of A.  Call this ``linear.m``.

     http://homepages.math.uic.edu/~hanson/Octave/OctaveLinearAlgebra.html


5. Python, a dynamic scripting language (calculus).
     [+3] Using the sympy library, write a Python script to evaluate for each
     of the functions f(x) in ``functions.txt``, the limits as x->0 and x->oo,
     the derivative, the integral, the series expansion to five terms, and the
     solution to f(x)=0.  See ``src/calculus.py`` for a script to get you
     started.  Call this ``calculus.py``.

     The utility of this is that you can auto-solve problems from a textbook
     with it.  There is even a facility in sympy for outputting the results
     straight into LaTeX code (see above).

     http://docs.sympy.org/latest/tutorial/calculus.html


6. Create a universal hacking tool!
     [+3] If you didn't already do so, create a LiveUSB of either Kali or
     Tails, then demonstrate it to me prior to the due date. 

       a. Get information on networks.
            [+3] Given the way wireless LANs are set up, it is quite easy to
            see what hostnames/IPs are making what requests across a network,
            and also to intercept broadcast packets.  Some of these packets
            contain plain-text; most are encrypted.  In any case, it is easy to
            see who is browsing what sites.
            
            Load Kali on a laptop, then connect to eduroam in a public area.
            Run the command ``ifconfig`` to determine what wireless interfaces
            you have.  Then run

            ``tcpdump -X -c 1000 -i <device> > tcp.dump``

            to dump 1000 broadcast packets from your wireless device to file.
            Verify that the file is non-empty.  Upload the file to the server
            before you shut down, then come see me in my office.  I will
            explain how to interpret the tcpdump output, then grant your
            points.

