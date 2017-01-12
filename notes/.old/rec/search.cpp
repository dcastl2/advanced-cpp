#include <iostream>

int bin_search(int *a, int k, int lo, int hi) {
  int med = (hi+lo)/2;
  if (med == lo) {
    if (a[med] == k) return  k;
    else             return -1;
  } else if (k < a[med]) {
    return bin_search(a, k, lo,   med);
  } else if (k > a[med]) {
    return bin_search(a, k, med+1, hi);
  }
}

int bin_search(int *a, int n, int k) {
  return bin_search(a, k, 0, n);
}

int lin_search(int *a, int n, int k) {
  int i;
  for (i=0; i<n; i++)
    if (a[i] == k)
      return k;
  return -1;
}

int main() {
  int a[5] = {2, -3, 5, -7, 11};
  std::cout << lin_search(a, 5, 5) << std::endl;
  std::cout << bin_search(a, 5, 5) << std::endl;
}
