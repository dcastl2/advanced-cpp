#include <iostream>
#include <cstdlib>

int main() {

  // Allocate exactly 8 bytes of memory.
  char *a = new char[8];

  // Assign first 8 characters of alphabet to a.
  for (int i=0; i<8; i++)
    a[i] = 'a'+i;

  // Print out array a.
  for (int i=0; i<8; i++)
    std::cout << a[i];
  std::cout << std::endl;

}
