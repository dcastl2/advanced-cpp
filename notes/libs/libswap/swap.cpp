#include "swap.h"
#include "color.h"

namespace swp {

  void clear() {
    std::cout << std::flush;
    std::cout << std::string(80, '\n');
  }

  void print(int a[], int n) {
    for (int i=0; i<n; i++)
      std::cout << std::setw(4) << a[i];
    std::cout << std::endl;
  }

  void print(int a[], int n, int j, int k, std::string c) {
    for (int i=0; i<n; i++)
      if (i==j || i==k)
           std::cout << c << std::setw(4) << a[i] << color::white;
      else std::cout <<      std::setw(4) << a[i];
    std::cout << std::endl;
  }

  void print_except(int a[], int n, int j, int k) {
    for (int i=0; i<n; i++)
      if (i==j || i==k)
           std::cout << std::setw(4) << " ";
      else std::cout << std::setw(4) << a[i];
    std::cout << std::endl;
  }

  void print_only(int a[], int n, int j, int k, int t) {
    int d=(k-j)*4;
    if (d==0) return;
    for (int i=-4; i<4*n; i++)
           if (i==(j*4+((t*d)/20))) std::cout << color::green << a[j] << color::white;
      else if (i==(k*4-((t*d)/20))) std::cout << color::green << a[k] << color::white;
      else                          std::cout << " ";
    std::cout << std::endl;
  }

  void print_only(int a[], int n, int j, int k) {
    for (int i=0; i<n; i++)
      if (i==j || i==k)
           std::cout << std::setw(4) << a[i];
      else std::cout << std::setw(4) << " ";
    std::cout << std::endl;
  }

  void check(int a[], int n, int i, int j) {
    clear();
    print(a, n, i, j, color::yellow);
    usleep(500000);
  }

  void swap(int a[], int n, int i, int j) {
    if (i>j) { int t=i; i=j; j=t; }  // swap
    for (int t=1; t<=20; t++) {
      print_only  (a, n, i ,j, t);
      print_except(a, n, i ,j);
      usleep(50000);
      clear();
    }
    clear();
    std::swap(a[i], a[j]);
    print(a, n, i, j, color::green);
    usleep(500000);
  }

};
