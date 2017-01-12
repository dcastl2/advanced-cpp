#include <iostream>

int main() {

  int  a     =  1,  b     =  1,  c     =  1;
  int *a_ptr = &a, *b_ptr = &b, *c_ptr = &c;

  for (int i=0; i<10; i++) {
    std::cout << *a_ptr << std::endl;
    *c_ptr = *a_ptr + *b_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = *c_ptr;
  }

}
