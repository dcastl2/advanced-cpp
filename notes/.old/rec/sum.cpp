




#include <iostream>

int sum(int n) {
  if (n==1) return 1;
  else      return n+sum(n-1);
}

int main() {
  std::cout << sum(5) << std::endl;
}
