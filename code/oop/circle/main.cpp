#include <iostream>
#include "Circle.h"

int main() {

  // Uses default constructor
  Circle circ1;
  circ1.x = 2;
  circ1.y = 3;
  circ1.r = 5;
  circ1.describe();

  // Uses the defined constructor
  Circle circ2(1, 1, 2);
  circ2.describe();

  // Uses copy constructor
  Circle circ3 = circ2;  
  circ3.describe();

}
