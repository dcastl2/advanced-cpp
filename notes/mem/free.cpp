#include <iostream>
#include <cstdlib>

int main() {

  // Allocate memory for a (10 integers).
  int *a = (int *) malloc(10*sizeof(int));

  // Do stuff with a.
  // ...
  
  // Free the allocate memory (release it back to the operating system).
  free(a);

}
