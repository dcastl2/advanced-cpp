#include <iostream>

bool odd(int n) {
  return n%2;
}

int main() {
  std::cout << odd(3) << std::endl;
  std::cout << odd(4) << std::endl;
}
