#include <iostream>

int sum(int a[], int n) {
  if (n<1) return 0;
  int s = a[0];
  for (int i=1; i<n; i++)
    s += a[i];
  return s;
}

int main() {
  int a[6] = {1, 2, 3, -3, -2, -1};
  std::cout << sum(a, 6) << std::endl;
}
