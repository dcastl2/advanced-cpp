#include <iostream>

int main() {

  // Declare array and point to first element
  int  a[5]  = {2, 3, 5, 7, 11};
  int *a_ptr =  a;

  // Loop through memory addresses to print out elements indirectly
  for (int i=0; i<5; i++)
    std::cout << *(a_ptr+i) << std::endl;

}
