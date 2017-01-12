#include <iostream>

/**
 * When we pass pointers to variables in, then make changes to their
 * values, those changes are reflected in the original variables.
 */
void do_something(int *a_ptr, int *b_ptr) {
  (*a_ptr)++;
  (*b_ptr)++;
}

/**
 * Here we initialize a=2 and b=3, then pass pointers to a and b to the
 * function above.  In that function, we reference a and b indirectly through
 * pointers, changing their values. Thus when we print a and b out after the
 * function call, the values are changed. 
 *
 * Passing pointers to functions is similar to passing-by-address in that we
 * are not copying the data as it is passed in; instead we are passing a
 * reference to the data, when we can use to indirectly manipulate the data. 
 */
int main() {
  int  a=2,      b=3;
  int *a_ptr=&a, *b_ptr=&b;
  do_something(a_ptr, b_ptr);
  std::cout << a << " " << b     << std::endl;
}
