#include <iostream>
#include <unistd.h>
#include <stdlib.h>

/**
 * The usage function tells how to call the program.
 * @param name  name of program
 */
void usage(char *name) {
  std::cerr << "usage: " << name << " name" << std::endl;
}

/**
 * If the number of arguments was not 1, then print the usage message and exit.
 */
int main(int argc, char **argv) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE); 
  }
  std::string s = std::string(argv[1]);
  for (int i=0; i<s.size(); i++)  {
    usleep(1000000/20);  
    std::cout << s[i] << std::flush;
  }
  std::cout << std::endl;
}
