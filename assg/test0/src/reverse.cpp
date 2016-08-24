#include <iostream>

std::string reverse(std::string s) {
  for (int i=0; i<s.size()/2; i++)
    std::swap(s[i], s[s.size()-i-1]);
  return s;
}

int main() {
  std::cout << reverse("abcd") << std::endl;
}
