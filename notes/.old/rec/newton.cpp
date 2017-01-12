#include <iostream>
#include <cmath>

#define eps 1e-3
#define del 1e-2


float f(float x) {
  return pow(x, 3) - 2*pow(x, 2) + x - 4;
}

float df(float x) {
  return (f(x+del) - f(x-del)) / (2*del);
}

float newton(float x) {
  if (std::abs(f(x)) < eps) return x;
  else                      return newton(x - f(x)/df(x));
}

int main() {
  std::cout << newton(5) << std::endl;
}
