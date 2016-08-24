#include <iostream>

/**
 * Returns sum of numbers from 1 to n (inclusive).
 * @param   n  number to sum up to
 * @return     sum of numbers from 1 to n
 */
int sum(int n) {
  int s = 0;
  for (int i=0; i<=n; i++)
    s += i;
  return s;
}

int main() {
  std::cout << sum(10) << std::endl;
}
