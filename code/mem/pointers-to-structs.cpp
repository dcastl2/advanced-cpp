#include <iostream>
#include <cstdlib>

// A struct for representing an imaginary number.
struct imag {
  float a, b;
};

int main() {

  // A normal struct. To access its fields, we use the dot (.) operator.
  struct imag y;
  y.a = 2;
  y.b = 3;
  std::cout << y.a << "+" << y.b << "i" << std::endl;

  // A pointer to a struct. First we must allocate memory for it. Then
  // to access its fields, we use the arrow (->) operator.
  struct imag *z = (imag *) malloc(sizeof(imag));
  z->a = 4;
  z->b = 5;
  std::cout << z->a << "+" << z->b << "i" << std::endl;

  free(z);
}
