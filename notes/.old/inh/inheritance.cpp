/**
 * A is some class.
 */
class A {
  private:    int x;
  protected:  int y;
  public:     int z;
};

/**
 * B is-a A.  Since this is public inheritance, B inherits all of the variables
 * of A at the same level access.
 */
class B : public A {
  private:    int u;
  protected:  int v;
  public:     int w;
};

int main() {
  B b;
  b.z = 1;  // We can set z because z is public and was inherted from A.
}
