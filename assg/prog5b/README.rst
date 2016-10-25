EC Homework 5
=============

Select up to +8 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
10/23/16 at 6:00 PM).


1. Encrypting directories.
     [+2] See ``src/`` for an example of the use of the smartlog library.
     Write a BaSH script which uses the smartlog logging functionality and the
     OpenSSL utility to encrypt and decrypt directories for the user, using
     password-based authentication.  The script should accept the directory
     name as input; then it should determine (without prompting!) whether to
     encrypt or decrypt based on the filename extension.  Use AES-256-CBC.
     Name encrypted directories with the .aes extension.

     https://linuxconfig.org/using-openssl-to-encrypt-messages-and-files-on-linux


2. Comprehensive monitoring.
     [+2] See ``src/`` for an example of the use of the smartlog library.
     Write a BaSH script which uses smartlog logging functionality to print out
     the time and date, the percentage of free memory, and the disk
     utilization.  For these you can use the commands ``date``, ``free``, ``df
     -h``; and use ``expr`` to do calculations.  

     Also use ``curl -s wttr.in | head -n 7`` to get the weather. Similar to
     the CLI news headlines, retrieve the top 5 headlines, but this time you
     may use any means to do so.  You may add more information (specific news,
     top processes, etc) for sticker credit.  Call this ``info.sh``.


3. LaTeX your homework.
     [+2] Choose a homework assignment for another STEM class you are taking.
     Then, do your homework writeup using LaTeX. You must make use of LaTeX's
     math typesetting capabilities. Call this ``homework.tex``. Submit only the
     LaTeX source.  You may repeat this problem yet again, but you have to
     choose a different homework assignment.


4. R, the statistics language.
     [+2] The file ``data.csv`` contains some data in a comma-separated value
     format.  Using the R language, write a script to find the means, medians,
     and standard deviations for x and y.  Also print the correlation between x
     and y.  Call this ``stats.R``.  You may call and use the R interpreter to
     experiment with the language.


5. Haskell, a functional programming language.
     [+2] Write a program ``nums.hs`` to calculate the sum of numbers 1 to
     n and the factorial of numbers 1 to n.  Your functions should accept
     n as an integer (and my require wrappers).  Use the ``ghc`` (Glasgow
     Haskell Compiler) installed on the system.


6. Brute-force password decryption.
     [+4] Write a program ``crack.c`` to crack the password whose hash is
     contained in ``hash``, using the DES encryption algorithm.  You may assume
     that the password is exactly four lowercase characters long and that the
     salt consists of lowercase letters.
     
     To do this, you will need to call the function ``crypt()`` on all possible
     combinations of four-character passwords, then check if the hash returned
     by it is equal to the hash given in the file.  If the two hashes are
     equal, then the solution is the last-generated password.  See the manual
     page for ``crypt``.

     Your program should be written in C.
