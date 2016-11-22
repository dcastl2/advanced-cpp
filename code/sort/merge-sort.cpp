#include <iostream>

#define N 7
#define M 5


void print(int *a, int n) {
  for (int i=0; i<n; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
}


void *merge(int *a, int low, int mid, int high) {
  int *c = new int[high-low];
  for (int i=low, j=mid, k=0; k<high-low; k++)
    if (j>=high || (i<mid && a[i] < a[j])) c[k] = a[i++];
    else                                   c[k] = a[j++];
  for (int k=0; k<high-low; k++)
    a[low+k] = c[k]; 
  print(a, 8);
}


void mergesort(int *a, int low, int high) {
  if (high <= low + 1) return;
  int mid = (low+high)/2;
  mergesort(a,  low,  mid);
  mergesort(a,        mid,   high);
  merge    (a,  low,  mid,   high);
}


int main() {
  int  a[8] = {13, 2, 17, 11, 5, 3, 7, 19};
  mergesort(a, 0, 8);
}
