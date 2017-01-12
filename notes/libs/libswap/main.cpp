#include "swap.h"

int main() {

  int n = 5;
  int a[n] = {7, 2, 11, 3, 5};

  for (int i=0; i<n; i++)
    for (int j=0; j<i; j++)
      if (a[i] < a[j])
            swp::swap (a, n, j, i);
      else  swp::check(a, n, j, i);

}
