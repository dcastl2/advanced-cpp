#ifndef SWAP_H
#define SWAP_H

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <string>

namespace swp {

  void clear       ();
  void print       (int a[], int n);
  void check       (int a[], int n, int i, int j);
  void swap        (int a[], int n, int i, int j);
  void print_only  (int a[], int n, int i, int j, std::string c);
  void print_except(int a[], int n, int i, int j);

};

#endif
