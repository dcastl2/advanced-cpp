
/**
 * In this class, x is private, which means it cannot be accessed outside of
 * the class definition.  However, y is public, which means it can be.  In
 * order to access private members of a class, we must create public
 * methods--accessors for getting the value, mutators for changing the value.
 */
class A {
  private:
    int x;
  public:
    int y;
    int  getX()      { return x;    }
    void setX(int x) { this->x = x; }
};


int main() {
  A a;          // Create object of class A called a
  a.y = 2;      // Set value of y for this object to 2
  a.setX(3);    // Set value of x for this object to 3 through public method

  std::cout << a.getX() << std::endl;   // Access x through public method
  std::cout << a.y      << std::endl;   // Access y directly, since it is public
}
