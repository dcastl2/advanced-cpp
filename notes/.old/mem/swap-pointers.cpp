#include <iostream>

/**
 * This program illustrates very basic pointer assignment.
 */
int main() {

  int  a     = 3;    // a has value 3
  int *a_ptr = &a;   // a_ptr points to the address of a
  int  b     = 5;    // a has value 3
  int *b_ptr = &b;   // a_ptr points to the address of a
  int *c_ptr;

  std::cout << "Values before swapping: ";
  std::cout <<  a     << " " <<  b     << std::endl;
  std::cout << "Values of pointers before swapping: ";
  std::cout << *a_ptr << " " << *b_ptr << std::endl;

  c_ptr = a_ptr;
  a_ptr = b_ptr;
  b_ptr = c_ptr;

  std::cout << "Values after swapping: ";
  std::cout <<  a     << " " <<  b     << std::endl;
  std::cout << "Values of pointers after swapping: ";
  std::cout << *a_ptr << " " << *b_ptr << std::endl;

}
