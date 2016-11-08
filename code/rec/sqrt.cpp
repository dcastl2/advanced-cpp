#include <iostream>
#include <cmath>

#define eps 1e-3

float my_sqrt(float x, float g) {
  float delta = g*g - x;
       if (std::abs(delta) < eps) return g;
  else if (delta > 0)             return my_sqrt(x, g-.05*g);
  else if (delta < 0)             return my_sqrt(x, g+.1*g);
}

float my_sqrt(float x) {
  return my_sqrt(x, x);
}

int main() {
  std::cout << my_sqrt(5) << std::endl;
}
