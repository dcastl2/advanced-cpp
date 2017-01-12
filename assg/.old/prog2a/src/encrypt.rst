Encryption
==========

Suppose I have an input file to encrypt:
.. raw::
    The only true wisdom is in knowing you know nothing.

(A quote by Socrates.) What I can do then is ask the user for a password.
Suppose the user enters ``kitties``. Then what I may do is pre-pend the
password to an output file, and add ``kitties`` in rounds to the file:
.. raw::
      kittiesThe only true wisdom is in knowing you know nothing.
    + kittieskittieskittieskittieskittieskittieskittieskittieskit
      -----------------------------------------------------------
    = fhdkalhfioepwahfkdsanklvcxznkjvpwipqnkxlkdlajsflkjkljkljlkd

When I add the characters in the string ``kitties``, I get what appears to be
jumbled garbage. Without the password, it is hard to decrypt the file.  To
decrypt the file, I ask the user for the password. Suppose they enter
``bubbles`` (the wrong password).
.. raw::
       fhdkalhfioepwah...
     - bubbles
       ------------------
     = ueiaqnv

I see that by subtracting ``bubbles`` off the encrypted text, I do not get
the string ``bubbles`` back, so ``bubbles`` is not the password. If the user
enters ``kitties`` (the correct password):
.. raw::
       fhdkalhfioepwah...
     - kitties
       ------------------
     = kitties

Then I see that what I get back is ``kitties``, and since it matches the
user password entered, I may proceed to decrypt the rest of the file simply
by subtracting ``kitties`` off it in rounds.
.. raw::
    = fhdkalhfioepwahfkdsanklvcxznkjvpwipqnkxlkdlajsflkjkljkljlkd
    - kittieskittieskittieskittieskittieskittieskittieskittieskit
      -----------------------------------------------------------
      kittiesThe only true wisdom is in knowing you know nothing.

Thus I obtain the original message.  Notice the user-supplied password itself
is a necessary element of the decryption.  This type of algorithm is called a
**block cipher algorithm**.
