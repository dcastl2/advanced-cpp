Libraries and Modular Design
============================

A **library** is a collection of functions, and data which serve a common
purpose.  The ``iostream`` header which is frequently included in C++
programs is part of the C++ input/output stream library.  The ``cmath``
header is part of the C standard library. 

A user may write his or her own libraries by organizing functions and data
under info separate source files (called **library sources**).  The practice of
organizing code into functions, functions into files, and files into libraries,
is called **modular design**.  The purpose of modular design is to support the
reuseability and manageability of code.  It is easier to debug, compile, and
maintain the code; and it accords with the DRY principle (Don't Repeat
Yourself).

Each library source typically has its own **header file**, which provides the
interface to the library source.  Header files contain function prototypes and
data declarations.  They are included wherever a program uses a ``#include``
directive in a source code.  Header files serve two important purposes:

  * separate interface from implementation
  * concisely document the library source

It is possible to compile a library source into an **object file**, which may
then be **linked** against a code which uses the library functions.  The object
file is the machine-language representation of the plain-text library source
code, and it can be used without the library source.  This allows for a
programmer to package the executable form of their library functions and
distribute them to other programmers without giving them the source code.
(This is important if a programmer wants to write an application that makes
money--if the source is released, anyone can re-compile it and make
protection-free ports of the application.)

A Windows DLL (dynamic linked library) file is an example of such an object
file.  Windows systems have DLLs to allow programmers to use Windows-based
functions; but the source code is closed to the public.  The header files exist
to show programmers what functions are available and how to call them.  In a
Unix/Linux environment, C/C++ object files typically have a .o extension.

An open-source library typically comes with some kind of demonstration code to
show how the library functions are used.  Most widely-used open-source
libraries come with reference manuals and tutorials.  Modular design and
documentation practices support each other: breaking the code up and organizing
it into functions and files makes it much easier to document the code.

