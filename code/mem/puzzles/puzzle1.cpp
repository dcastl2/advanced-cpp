#include <iostream>

int main() {
  
  int  a[5] = {4, 2, 0, -1, -3};
  int *a_ptr = a;

  while (*a_ptr != 0) {
    std::cout << *a_ptr << std::endl;
    a_ptr += *a_ptr;
  }

}
