#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>

int main() {

  // A double pointer is a pointer to an array of pointers.
  // Here we allocate memory for an array of eight (char *).
  char **a = (char **) malloc(sizeof(char *)*8);

  // After allocating memory for the array of pointers, we
  // can then allocate memory for each of the eight character arrays.
  for (int i=0; i<8; i++)
    a[i] = (char *) malloc(sizeof(char)*4);

  // At this point, a is a 2D array of dimensions 8x4. It contains
  // 8 words of 4 characters each.  We may now proceed to initialize
  // it.
  strcpy(a[0], "phys");
  strcpy(a[1], "math");
  strcpy(a[2], "chem");
  strcpy(a[3], "biol");
  strcpy(a[4], "psyc");
  strcpy(a[5], "phil");
  strcpy(a[6], "mus");
  strcpy(a[7], "art");

  // For printing out markers...
  std::cout << std::setw(4) << "      j> ";
  for (int i=0; i<4; i++) 
    std::cout << std::setw(4) << i;
  std::cout << std::endl << "   i";
  std::cout << std::endl << "   v" << std::endl << std::endl;

  // We can print out the matrix like so:
  for (int i=0; i<8; i++) {
    std::cout << std::setw(4) << i << ":    ";
    for (int j=0; j<4; j++)
      std::cout << std::setw(4) << a[i][j];
    std::cout << std::endl;
  }

  for (int i=0; i<8; i++)
    free(a[i]);
  free(a);

}
