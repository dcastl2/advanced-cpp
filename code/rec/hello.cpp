




#include <iostream>

void hello(int n) {
  if (n==0) return;
  std::cout << "Hello!" << std::endl;
  hello(n-1);
}

int main() {
  hello(3);
}
