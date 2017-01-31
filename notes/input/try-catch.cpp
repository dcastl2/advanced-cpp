#include <iostream>

/**
 * Return numerator/denominator.
 * @param numerator   numerator of division
 * @param denominator denominator of division
 * @return            result of division
 */
float divide(float numerator, float denominator) {
  if (denominator==0)
    throw "Cannot divide by zero!";
  return numerator/denominator;
}

int main() {

  /**
   * Prompt user for numerator and denominator.
   */
  float numerator, denominator;
  std::cout << "numerator>   ";
  std::cin  >>  numerator;
  std::cout << "denominator> ";
  std::cin  >>  denominator;

  /**
   * Attempt the division; if it fails, print the error message thrown by the
   * function.
   */
  try {
    std::cout << divide(numerator, denominator) << std::endl;
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }

}
