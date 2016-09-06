#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>     // <~~~ for exit(int)


/**
 * Display usage message to stderr.
 * @param progname  name of the program
 */
void usage(char *progname) {
  std::cerr << "usage: " << progname << " file" << std::endl;
}


/** 
 * This program accepts one command-line argument (a name) and attempts
 * to open a file by that name.  If it succeeds or fails, it prints a 
 * message to that effect.
 */
int main(int argc, char **argv) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  std::ifstream infile(argv[1]);
  if (infile.good()) std::cerr << "The file could be opened!"    << std::endl;
  else               std::cerr << "The file couldn't be opened!" << std::endl;
}

