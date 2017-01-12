#include <iostream>
#include <iomanip>
#include <cstdlib>

/**
 * A jagged array is a multi-dimensional array wherein the size of each row
 * may differ. For example, in a "matrix" with 8 rows, the first row may be
 * of size 1, the second of size 2, etc.  We can create a jagged array using
 * pointers.
 */

/**
 * Suppose we wanted to fill a matrix with a multiplication table and output
 * it.  For that, we only really need to store the lower triangle and the
 * diagonal of the table (since it is symmetric across the diagonal).  So we
 * create a jagged array.
 */
int main() {

  // Here we allocate memory for 8 rows.
  int **a = (int **) malloc(sizeof(int *)*8);

  // Here we allocate i columns for the ith row.
  for (int i=0; i<8; i++)
    a[i] = (int *) malloc(sizeof(int *)*(i+1));

  // Now we can populate the "matrix".
  for (int i=0; i<8; i++)
    for (int j=0; j<=i; j++)
      a[i][j] = (i+1)*(j+1);

  // Now we can print it. Note that we are only printing what is allocated
  // for. 
  for (int i=0; i<8; i++) {
    for (int j=0; j<=i; j++)
      std::cout << std::setw(4) << a[i][j];
    std::cout << std::endl;
  }

  // Free memory from all pointers
  for (int i=0; i<8; i++)
    free(a[i]);
  free(a);

}
