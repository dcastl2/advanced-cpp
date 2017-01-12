EC Homework 3
=============

Select up to +8 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
10/09/16 at 6:00 PM).


1. LaTeX your homework.
     [+2] LaTeX is a markup language used for high-grade documentation.  Choose
     a homework assignment for another STEM class you are taking.  Then, do
     your homework writeup using LaTeX. You must make use of LaTeX's math
     typesetting capabilities. Call this ``homework.tex``. Submit only the
     LaTeX source.


2. Executable hacking.
     [+2] The file ``game`` has a password system that does not allow you to
     play unless you enter the correct password via stdin.  Copy the executable
     to a file by another name, ``crack``. Then using the method discussed in
     class, use ``objdump -d``, ``gdb``, and ``hexedit`` to hack the executable
     to bypass the password prompt.  The prompt must not display or ask for a
     password, or scold you in case an incorrect one was entered; instead, the
     cracked executable should open straight to the game.


3. IP geolocation.
     [+2] Write a BaSH script which can obtain the IP addresses of everyone
     currently logged into the server (use ``w -i`` and ``awk`` to isolate the
     IP information).  For each IP address, it should run ``traceroute`` on the
     IP to determine all the hops to the IP.  For each hop, it should run
     ``curl`` on the ``ipinfo.io`` database to determine the approximate GPS
     coordinates of the hop (off-line you could use geoiplookup's city
     database).  Format your output neatly. Call this ``trace.sh``.


4. A text-mode video game. 
     [+4] If you did not already create a text-mode game as per the previous
     assignment, you may do one now for half the credit.  If you *did* create a
     text-mode game, you may refine it by adding color and two additional
     commands to your interface. 


5. Parameterized animations.
     [+4] If you did not already create an animation as per the previous
     assignment, you may do one now for half the credit.  If you *did* create
     an animation, you may refine it by adding two options which affect the
     animation in some way.  Examples may include a degree of randomness, the
     number of objects rendered, number of times to loop the animation, and so
     forth.


6. Create a universal hacking tool!
     [+4] Create a LiveUSB of either Kali or Tails, then demonstrate it to me
     prior to the due date. I will show you how to use it to bypass Windows
     and Mac user authentication, then grant your points.
