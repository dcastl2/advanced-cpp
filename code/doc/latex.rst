The LaTeX Typesetting Language
==============================

``LaTeX`` (pronounced la-tek') is a markup language (a language for describing
how something is to appear on the screen).  It is used for typesetting most of
the mathematical formulae you see in textbooks and papers; and it is used to
typeset other media, such as books and technical manuals. ``LaTeX`` sources
compile into PDF documents. Why it is worth learning:

  * If you are a student of mathematics, physics, or computer science, it is a
  language worth knowing; you can ultimately save yourself time by typesetting
  your work in plain-text. 

  * If you are otherwise a student who takes pride in beautiful work, ``LaTeX``
  is an excellent language to add polish to your homeworks, papers, and notes.
  Your teachers will be impressed than an undergraduate knows it.

  * If you enter graduate school in any "hard" STEM field, it is worth it to
  know ``LaTeX``, because you will likely end up writing papers in it; if not,
  you will be competing with people who use it.

  * Also, typesetting can be profitable; you can typeset books, reference
  manuals, research papers, advertisement flyers, class notes, and other 
  media efficiently and beautifully; and stockpile your code for re-use.

It is especially useful if you know how to work regex in conjunction with it,
because you can make substitutions to text in a ``LaTeX`` document in ways that
you wouldn't be able to with other software. For example, it is possible to
switch all boldface words to italics in a single command (try doing that in a
word processor!). You can also automatically re-size all images, insert
pagebreaks, etc. with substitutions.

``LaTeX`` documents end in a ``tex`` extension.  To compile a file called
``hello.tex``, run the command:

  ``pdflatex hello.tex``

and a file called ``hello.pdf`` will be generated, along with other auxiliary
documents (which you are free to remove). 
