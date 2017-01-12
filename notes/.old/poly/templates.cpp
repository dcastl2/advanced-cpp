#include <iostream>

/**
 * A generic function which can take values of any type
 * and return the sum of those values.
 */
template<class T>
T add(T a, T b) {
  return a+b;
}

/**
 * A generic function which can take values of any two different types
 * and return the sum of those values; the return type is the type of
 * the first thing.  This makes it possible to add integers to characters,
 * for example.
 */
template<class U, class V>
U add(U a, V b) {
  return a+b;
}

int main() {
 
  // For these calls, the first add function is the one called since the
  // types of the values are the same.
  std::cout << add(2,     3)    << std::endl;
  std::cout << add(2.1,   3.2)  << std::endl;
  std::cout << add(false, true) << std::endl;

  // For these calls, the second add function is the one called since the
  // types of the values are different.
  std::cout << add('a',   1)    << std::endl;
  std::cout << add(1,    'x')   << std::endl;

}
