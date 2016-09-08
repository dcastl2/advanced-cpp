# A Makefile is used to automatically compile source code. It can handle
# dependencies; for example if a code depends on an object file, a Makefile can
# be written to compile that object file first, then use it in compiling a
# demonstration code.



# all depends on main
all: main

# main depends on the hello.o object file
main: hello.o
	g++ main.cpp hello.o -o hello

# hello.o object file depends on hello.cpp source
hello.o: hello.cpp
	g++ hello.cpp -c

# a rule to remove the object files and executables
clean:
	$(RM) hello.o hello



# Generally, the syntax is:
#
#   target: dependencies
#       formula
#
# Also note that the formula must be set off by a TAB rather than spaces.
