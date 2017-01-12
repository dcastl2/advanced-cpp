#include <iostream>

void do_something(int a, int b) {
  a++;
  b++;
}

int main() {
  int  a=2,      b=3;
  do_something(a, b);
  std::cout << a << " " << b << std::endl;
}
