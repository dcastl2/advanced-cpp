#include <iostream>

/**
 * A is a class which has a single integer.
 */
class A {
  public:
    int x;
};

/**
 * B is a class which has an integer and an instance of A.
 */
class B {
  public: 
    int y;
    A a;
};

int main() {

  // Create instance of class A.
  A a;
  a.x = 1;

  // Create instance of class B.
  B b;
  b.y = 2;

  // Set B's A object to the object we created.
  b.a = a;

  // Print out values.
  std::cout << b.a.x << std::endl;
  std::cout << b.y   << std::endl;

}
