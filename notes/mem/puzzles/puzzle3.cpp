#include <iostream>

int main() {

  int  a     = 1;
  int  b     = 2;
  int  c     = 3;

  int *a_ptr = &c;
  int *b_ptr = &b;
  int *c_ptr = &a;

  *a_ptr     = 3;
  *b_ptr     = 2;
  *c_ptr     = 1;

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

}
