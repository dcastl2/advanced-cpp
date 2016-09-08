#include <iostream>
#include "coloration.h" 

int main() {
  clr::set_color("alpha", "yellow");
  clr::set_color("digit", "green");
  clr::set_color("punct", "blue");
  clr::set_color("arith", "red");
  clr::set_color("other", "magenta");

  clr::typeout("There are 26 students in this class.");
  clr::typeout("The derivative of 2x^3 is 6x^2.");
  clr::typeout("#selfie");

}
