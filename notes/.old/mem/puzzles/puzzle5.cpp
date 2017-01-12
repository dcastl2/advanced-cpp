#include <iostream>

int main() {

  int  a[6]  = {1, 2, 4, 6, 10, 0};

  for (int *a_ptr = a; *a_ptr != 0; a_ptr++)
    std::cout << *(a_ptr+1) << '\t' << *a_ptr + 1 << std::endl;

}
