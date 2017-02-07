#include <iostream>
#include <cstdlib>

int main() {

  // Allocate memory for rows
  int sizes[5] = {5, 2, 7, 3, 11};
  int **a = (int **) malloc(5*sizeof(int *));

  // Allocate memory within rows
  for (int i=0; i<5; i++)
    a[i] = (int *) malloc(sizes[i]*sizeof(int));

  // Initialize jagged array
  int num = 0;
  for (int i=0; i<5; i++)
    for (int j=0; j<sizes[i]; j++)
      a[i][j] = num++;


  // Print jagged array
  for (int i=0; i<5; i++) {
    for (int j=0; j<sizes[i]; j++)
      std::cout << a[i][j] << "\t";
    std::cout << std::endl;
  }

  // Deallocate memory
  for (int i=0; i<5; i++)
    free(a[i]);
  free(a);


}
