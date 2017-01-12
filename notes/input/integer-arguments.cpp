#include <iostream>
#include <iomanip>
#include <stdlib.h>  // exit


/**
 * Display usage message to stderr.
 * @param progname  name of the program
 */
void usage(char *progname) {
  std::cerr << "usage: " << progname << " num" << std::endl;
}


/**
 * Tell if character array represents integer.
 * @param a  character array
 * @return   true if represents integer; false otherwise
 */
bool is_integer(char *a) {
  int i=0;
  if (a[0] == '-') i++;
  while (a[i] != '\0') {
    if (!isdigit(a[i]))
      return false;
    i++;
  }
  return true;  
}


/** 
 * This program attempts to parse an integer (the first command line argument)
 * then print out the integer.  We can use the function atoi(char *) to do
 * this. However, if we enter strings other than integers, atoi will return 0,
 * so we should also check to see if the argument is numeric.  We can use
 * isdigit from <cctype> for this.
 */
int main(int argc, char **argv) {
  if (argc != 2 || !is_integer(argv[1])) { 
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  int num = atoi(argv[1]);
  std::cout << num << std::endl;
}

