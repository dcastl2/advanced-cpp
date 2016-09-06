#include <iostream>
#include <climits>      // <~~~ INT_MAX and friends

/**
 * It is possible to give this function such an n that it exceeds the value of
 * INT_MAX, the highest value that can be held by an integer. In that case it
 * will **overflow** in the calculation of the result.
 */
unsigned int sum(unsigned int n) {
  return (n*(n+1)/2);
}

/**
 * Demonstration of integer overflows.
 */
int main() {
  std::cout << "Sum of numbers 1 to 92681 is:  " << sum(92682) << std::endl;
  std::cout << "INT_MAX + 1 is:               "  << INT_MAX+1  << std::endl;
}
