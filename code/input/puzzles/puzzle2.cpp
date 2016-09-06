#include <iostream> 
#include <stdlib.h> 
#include <assert.h> 

// How must the program be called to get past the assert?
int main(int argc, char **argv) {
  for (argc--; argc>=0; argc--)
    assert(argc==atoi(argv[argc]));
  std::cout << "Correct!" << std::endl;
}
