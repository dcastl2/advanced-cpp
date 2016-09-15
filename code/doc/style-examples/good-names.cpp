#include <iostream>

int calories(int fats, int carbs, int proteins) {
  return 9*fats + 4*carbs + 4*proteins;
}

int main() {
  std::cout << calories(2, 5, 4) << std::endl;
}
