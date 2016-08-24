#include <iostream>
#include <iomanip>

void multi_table(int n) {
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) 
      std::cout << std::setw(4) << i*j;
    std::cout << std::endl;
  }
}

int main() {
  multi_table(10);
}
