#include <iostream>

int digits(int n) {
  if (n<10) return 1;
  else      return 1+digits(n/10);
}

int main() {
  std::cout << digits(23579) << std::endl;
}
