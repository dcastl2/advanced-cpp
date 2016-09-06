#include <iostream>
#include <iomanip>
#include <stdlib.h>     // <~~~ for exit(int)


/**
 * Display usage message to stderr.
 * @param progname  name of the program
 */
void usage(char *progname) {
  std::cerr << "usage: " << progname << " string" << std::endl;
}


/**
 * Display a greeting to the given name.
 * @param name  name to greet
 */
void greet(char *name) {
  std::cout << "Hello, " << name << "!" << std::endl;
}


/** 
 * This program accepts one command-line argument (a name) and displays
 * a greeting to that name.  However, unless exactly one command-line
 * argument is provided, the program will display a usage message and
 * exit.  This setup is very useful to account for unexpected user
 * behavior.
 */
int main(int argc, char **argv) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  greet(argv[1]);
}

