#include <iostream>

int main() {

  int  a[6]  = {0, 1, 3, 7, 15, 0};
  int *a_ptr = a;

  while ( (*(++a_ptr))++ );

  for (int i=0; i<5; i++)
    std::cout << a[i] << std::endl;
}
