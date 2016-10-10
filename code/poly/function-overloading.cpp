#include <iostream>

int sum(int i, int n) {
  int s = 0;
  for (i; i<=n; i++)
    s += i;
  return s;
}

int sum(int n) {
  int s = 0;
  for (int i=1; i<=n; i++)
    s += i;
  return s;
}

int main() {
  std::cout << sum(10)   << std::endl;
  std::cout << sum(2,10) << std::endl;
}
