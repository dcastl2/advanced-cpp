#include <iostream>
#include <unistd.h>

int main() {
  std::string s = "Hello, world!";
  for (int i=0; i<s.size(); i++) {
     std::cout << s[i] << std::flush;
     usleep(33333);
  }
  std::cout << std::endl;
}
