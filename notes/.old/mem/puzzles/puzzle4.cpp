#include <iostream>

int main() {

  int  a[6]  = {0, 2, 3, 4, 5, 0};
  int *a_ptr = a;

  while (*(++a_ptr) != 0)
           (*a_ptr)--;

  for (int i=0; i<5; i++)
    std::cout << a[i] << std::endl;

}
