#include <iostream>

int cs(int f, int c, int p) {
  return 9*f + 4*c + 4*p;
}

int main() {
  std::cout << cs(2, 5, 4) << std::endl;
}
