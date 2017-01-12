#include <iostream>
#include <iomanip>

/**
 * This program prints all of the command-line arguments which are passed to
 * it.  Here, main takes two parameters: argc and argv.  The integer argc is
 * the argument count, and argv contains the argument list.  For the purpose
 * of handling the arguments, argv may be treated as an array of character
 * arrays.
 *
 * The program name itself is argv[0], and because of that, argc is always
 * at least 1. 
 */

int main(int argc, char **argv) {
  for (int i=0; i<argc; i++)
    std::cout << std::setw(2) << i << "  " << argv[i] << std::endl;
}

