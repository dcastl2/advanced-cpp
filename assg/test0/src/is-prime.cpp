#include <iostream>
#include <cmath>

bool is_prime(int n) {
  for (int i=2; i<std::sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {
  for (int n=2; n<100; n++)
    if (is_prime(n))
      std::cout << n << " ";
  std::cout << std::endl;
}
