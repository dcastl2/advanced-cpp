#include <iostream>

int sign(int n) {
  return (n>0) - (n<0);
}

int main() {
  std::cout << sign( 3) << std::endl;
  std::cout << sign(-4) << std::endl;
  std::cout << sign( 0) << std::endl;
}
