#include <iostream>

/**
 * Sums numbers 1 to n.
 * @param n  number to sum to
 * @return  sum of numbers
 */
int sum(int n) {
  int s = 0;
  for (int i=1; i<=n; i++)
    s += i;
  return s;
}

/**
 * Reverse string
 * @param s  string to return
 * @return  return of string
 */
std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

int main() {
  std::cout << sum(10000) << std::endl;
}
