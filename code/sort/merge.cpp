#include <iostream>

#define N 7
#define M 5

int *merge(int *a, int *b) {
  int *c = new int[N+M];
  for (int i=0, j=0, k=0; k<N+M; k++)
    if (j>=M || (i<N && a[i] < b[j])) c[k] = a[i++];
    else                              c[k] = b[j++];
  return c;
}

int main() {
  int a[N] = {2, 3, 5, 7, 11, 13, 17};
  int b[M] = {1, 4, 6, 8, 9};
  int *c   = merge(a, b);
  for (int i=0; i<N+M; i++)
    std::cout << c[i] << std::endl;
}
