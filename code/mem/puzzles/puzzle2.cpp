#include <iostream>

int main() {
  
  int  a[7] = {0, 1, 1, 1, 1, 1, 0};
  int *a_ptr = a;

  while (*(++a_ptr) != 0) {
    *a_ptr += *(a_ptr-1);
    std::cout << *a_ptr << std::endl;
  }

}
