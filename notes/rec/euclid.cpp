#include <iostream>

int gcd(int x, int y) {
  return (y==0) ? x : gcd(y, x%y);
}

int main() {
  std::cout << gcd(18, 27) << std::endl;
}
