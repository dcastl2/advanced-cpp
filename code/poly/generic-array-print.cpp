#include <iostream>
#include <iomanip>

template<class T>
void print(T *a, int n) {
  for (int i=0; i<n; i++)
    std::cout << std::setw(4) << a[i];
  std::cout << std::endl;
}

int main() {
  int  a[5] = {2, 3, 5, 7, 11};
  char b[5] = {'k', 'i', 't', 't', 'y'};
  float c[5] = {1.2, 2.3, 3.4, 4.5, 5.6};
  print(a, 5);
  print(b, 5);
  print(c, 5);
}
