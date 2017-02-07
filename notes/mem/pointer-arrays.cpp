#include <iostream>

int main() {

  // Initialize array, assign a_ptr to address of a
  int  a[5]  = {2, 3, 5, 7, 11};
  int *a_ptr =  a;

  std::cout <<  a     << std::endl;   // prints address
  std::cout << *a_ptr << std::endl;   // prints first element
  std::cout << &a     << std::endl;   // prints address
  std::cout <<  a_ptr << std::endl;   // prints address

}
