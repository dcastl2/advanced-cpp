#include <iostream>

int factorial(int n) {
  int p = n;
  for (int i=n-1; i>0; i--)
    p *= i;
  return p;
}

int main() {
  for (int i=0; i<5; i++)
    std::cout << i << " " << factorial(i) << std::endl;
}
