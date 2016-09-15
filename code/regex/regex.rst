Using Regular Expressions for Efficient Editing
===============================================

A ``regex`` stands for **regular expression**.  A regular expression is an
expression which matches a string of characters.  Regular expressions can
contain ``wildcards``, which are symbols for matching arbitrary characters.
Example:

   *  ``cat``   matches ``cat``
   *  ``ca.``   matches ``cat``, ``car``, ``can``                   
   *  ``ca.*``  matches ``cat``, ``can it``, ``castleberry``
   *  ``(ca)*``  matches ``ca``, ``caca``, ``cacaca``, and the empty string
   *  ``(ca).*``  matches ``cat``, ``can it``, ``castleberry``
   *  ``[a-z]at``  matches ``cat``, ``dat``, ``hat``
   *  ``\*`` match ``*``
   *  ``\^`` match ``^``

There is a wide variety of symbols in regular expressions which represent
certain classes of characters or markers in the input.

   * ``^``:  beginning of line
   * ``$``:  end of line
   * ``.``:  any character
   * ``*``:  zero or more
   * ``+``:  one or more
   * ``()``: grouping
   * ``[]``: range
   * ``\``: escape literal
   * ``\(\)``: backreference grouping

So, for example:

   * ``a*`` matches zero or more ``a``'s, such as ``aa`` or ``aaaa``
   * ``b+`` matches one or more ``b``'s, such as ``bbb`` or ``bbbbbb``
   * ``(ab)*`` matches one or more ``ab``'s, such as ``ab`` or ``ababab``
   * ``^}$`` matches a line with only a brace on it
   * ``[a-z]*`` matches any lowercase word containing characters a-z
   * ``\\`` matches a backslash

The Unix utility ``sed`` stands for "stream editor"; it is an editor of any
kind of input stream (files, stdin, etc.).  It can process characters in the
input stream using regular expressions to perform sophisticated substitutions.
These substitutions are the most-used functionality of ``sed``.  ``vim`` also
has this functionality as a command. Substitutions take the form:

   ``s/find/replace/``

where ``find`` is a pattern to find, and ``replace`` is a pattern to replace
with. It is more powerful than the typical find-and-replace functionality,
however, mainly because it supports character classes, ranges, markers, and
**backreferences** to parts of the find pattern.  Here are some useful example
substitutions:

   * ``s/hello/goodbye/`` substitutes all occurences of ``hello`` with
   ``goodbye``

   * ``s/cout/std::cout/`` switches ``cout`` for ``std::cout``

   * ``s/\t/  /`` switches all tabs for two spaces

   * ``s/^/  /`` inserts two spaces at the beginning of a line, effectively
   indenting it

   * ``s/$/;/`` inserts a semicolon at the end of a line

   * ``s/\n//`` removes all newlines

   * ``s/\([a-z]\)/\U\1\L/`` substitutes all lowercase characters with
   uppercase counterparts

   * ``s/\(.*\) \(.*\)/\2 \1/`` switches two columns separated by a space

If a pattern is captured with ``\(`` and ``\)``, then it may be referenced later
in the order it appeared in the find pattern.  For example, the substitution

   ``s/\([a-z]\) \([0-9]\) \([A-Z]\)/\3 \2 \1/``

finds a lowercase character followed by a space followed by a single digit
followed by an uppercase character. An example match may be ``a 4 Z``. The
first backreference (the lowercase character) is referred to in the replace
pattern with a ``\1``, while the second (the digit) is referred to with ``\2``,
and the third (the uppercase character) with a ``\3``. The replacement
effectively reverses the order of the found characters.  Thus ``a 4 Z`` becomes
``Z 4 a``. 
