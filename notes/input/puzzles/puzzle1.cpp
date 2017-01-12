#include <iostream> 
#include <stdlib.h> 
#include <assert.h> 

// How must the program be called to get past the assert?
int main(int argc, char **argv) {
  assert(argc==atoi(argv[0]));
  std::cout << "Correct!" << std::endl;
}
