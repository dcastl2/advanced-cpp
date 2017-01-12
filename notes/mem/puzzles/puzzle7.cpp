#include <iostream>

int main() {

  int  a[5]     = {3, 2, 1, 0, 4};
  int *a_ptr[5];

  for (int i=0; i<5; i++) 
    a_ptr[i] = a+a[i];

  for (int i=0; i<5; i++)
    std::cout << *a_ptr[i] << std::endl;

}
