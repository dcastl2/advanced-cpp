# A Makefile is used to automatically compile source code. It can handle
# dependencies; for example if a code depends on an object file, a Makefile can
# be written to compile that object file first, then use it in compiling a
# demonstration code.



# all depends on main
all: main

# main depends on the swap.o object file
main: swap.o
	g++ main.cpp swap.o -o swap

# swap.o object file depends on swap.cpp source
swap.o: swap.cpp
	g++ swap.cpp -c

# a rule to remove the object files and executables
clean:
	$(RM) swap.o swap



# Generally, the syntax is:
#
#   target: dependencies
#       formula
#
# Also note that the formula must be set off by a TAB rather than spaces.
