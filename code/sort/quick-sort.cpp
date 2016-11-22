#include <iostream>


void print(int *a, int n) {
  for (int i=0; i<n; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
}


void quicksort(int *a, int lo, int hi) {

  int mid = (lo+hi)/2;
  int pivot = a[mid];
  int i = lo, j = hi;
  while (i<hi || j>lo) {
    while (a[i] < pivot) i++;
    while (a[j] > pivot) j--;
    if (i <= j) 
      std::swap(a[i++], a[j--]);
    else {
      if (j > lo) quicksort(a, lo, j);
      if (i < hi) quicksort(a, i, hi);
      return;
    }
  }

}




int main() {
  int  a[8] = {13, 2, 17, 11, 5, 3, 7, 19};
  quicksort(a, 0, 7);
  print(a, 8);
}
