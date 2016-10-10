#include <iostream>

template <class T>
class Coord {
  public:
    T x;
    T y;
    Coord<T>(T x, T y) {
      this->x = x;
      this->y = y;
    }
    Coord<T>(const Coord<T> &c) {
      this->x = c.x;
      this->y = c.y;
    }
};

template <class T>
class Complex : public Coord<T> {
  public:
    Complex<T>(T x, T y) : Coord<T>(x, y) {}
    Complex<T>(const Coord<T> &c) {
      this->x = c.x;
      this->y = c.y;
    }
};

template <class T>
std::ostream& operator<<(std::ostream &out, const Coord<T>& c) {
  std::cout << "(" << c.x << ", " << c.y << ")";
}

template <class T>
std::ostream& operator<<(std::ostream &out, const Complex<T>& c) {
  std::cout << c.x << " + " << c.y << "i";
}

template <class T>
Coord<T> operator+(const Coord<T>& lhs, const Coord<T>& rhs) {
  Coord<T> z(
    lhs.x + rhs.x,
    lhs.y + rhs.y
  );
  return z;
}

int main() {

  Coord<float> a(2.3, 4.5);
  Coord<float> b(6.7, 8.5);
  std::cout <<  a    << std::endl;
  std::cout <<  b    << std::endl;
  std::cout << (a+b) << std::endl;

  Complex<int> z(2, 3);
  Complex<int> y(z+z);
  std::cout <<  z    << std::endl;
  //std::cout <<  y    << std::endl;
  std::cout << (z+z) << std::endl;
}
