How to Find a Similar Person
============================

The ``find-person.cpp`` program uses an algorithm which finds the minimum
**Manhattan distance** between you and every other student in the class. The
distance metric uses data obtained from your NEO-FFI results.  When run without
arguments, it runs on the entire class. If you want to find a similar person,
call the program with your PAWS ID as the first argument, like this:

  ``find-person paws_id``

It is also possible to find a friend in the class by finding the person who is
most similar to your idea of a friend. Simply 

  1. Fill out the NEO-FFI test for your ideal friend,
  2. Add the friend's data to the file under the ID ``friend``,
  3. Remove your entry from the file,
  4. Run ``find-person friend``.

The program should turn out the person who is most similar to your ideal
friend.
