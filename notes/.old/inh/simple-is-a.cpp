#include <iostream>

/**
 * A is a class with a single integer.
 */
class A {
  public:
    int x;
};

/**
 * B is a class which inherits x from A.
 */
class B : public A {
  public:
    int y;
};

int main() {

  // Create an instance of A.
  A a;
  a.x = 1;

  // Create an instance of B.  
  B b;
  b.y = 2;

  // B has x because A has x.
  b.x = 3;

  // Print out values.
  std::cout << "a.x: " << a.x << std::endl;
  std::cout << "b.x: " << b.x << std::endl;
  std::cout << "b.y: " << b.y << std::endl;

};
