#include "Circle.h"
#include <cmath>
#include <iostream>

// Constructor
Circle::Circle(int x, int y, int r) {
  this->x = x;
  this->y = y;
  this->r = r;
}

// Copy constructor; copies object.
Circle::Circle(const Circle& c) {
  this->x = c.x;
  this->y = c.y;
  this->r = c.r;
}

float Circle::area() {
  return M_PI*r*r;
}

float Circle::circumference() {
  return 2*M_PI*r;
}

void Circle::describe() {
  std::cout << "Circle at ("   << x << ", " << y << ")";
  std::cout << " with radius " << r << std::endl;
}
