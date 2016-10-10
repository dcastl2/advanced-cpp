#include <iostream>

/**
 * This is a struct that represents an imaginary number.
 */
struct imag {
  int a, b;
};

/**
 * Here we overload the + operator to support adding two imaginary numbers.
 */
imag operator +(const imag &lhs, const imag &rhs) {
  imag z;
  z.a = lhs.a + rhs.a;
  z.b = lhs.b + rhs.b;
  return z;
}

/**
 * Here we overload the << operator to support outputting the struct however
 * we want to std::cout or to an std::ofstream file handler.
 */
std::ostream &operator << (std::ostream &out, const imag &z) {
  out << "(" << z.a << " + " << z.b << "i)";
  return out;
}

/**
 * Here we overload the == operator to test equality of two imags. 
 */
bool operator ==(const imag &lhs, const imag &rhs) {
  return (lhs.a == rhs.a) && (lhs.b == rhs.b);
}

/**
 * What follows is a demonstration of the operator overlooding. 
 */
int main() {

  // Declare imaginary number structs and load values into them.
  imag x, y, z;
  x.a = 1;
  x.b = 2;
  y.a = 3;
  y.b = 4;

  // Add using the overloaded + operator.
  z = x + y;

  // Output using the overloaded << operator.
  std::cout << x << " + " << y << " = " << z << std::endl;

  // Test equality using the overloaded == operator.
  if (x == x)
       std::cout << x << " is equal to "      << x << std::endl;
  else std::cout << x << " is not equal to "  << x << std::endl;

  if (x == y)
       std::cout << x << " is equal to "      << y << std::endl;
  else std::cout << x << " is not equal to "  << y << std::endl;

}
