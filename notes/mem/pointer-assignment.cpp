#include <iostream>

/**
 * This program illustrates very basic pointer assignment.
 */
int main() {

  int  a     = 3;    // a has value 3
  int *a_ptr = &a;   // a_ptr points to the address of a

  std::cout << "a: "  << std::endl;
  std::cout <<  a     << std::endl;        // prints a
  std::cout << *a_ptr << std::endl;        // prints value of a_ptr
  std::cout << &a     << std::endl;        // prints address of a
  std::cout <<  a_ptr << std::endl;        // prints a_ptr

}
