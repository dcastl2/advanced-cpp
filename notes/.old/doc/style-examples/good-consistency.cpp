#include <iostream>

int sum(int n) {
  int s = 0;
  for (int i=1; i<=n; i++)
    s += i;
  return s;
}

std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

int main() {
  std::cout << sum(10000) << std::endl;
}
