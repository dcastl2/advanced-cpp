/**
 *  @file
 *  @brief   Finds minimum and maximum
 *  @author  Dennis Castleberry <dcastl2@lsu.edu>
 *  @section Description 
 *  Finds maximum, minimum of array.  
 */

#include <iostream>

/**
 * Returns max of array.
 * @param   a  array
 * @param   n  size of array
 * @return     maximum of array
 */
int max(int a[], int n) {
  int m = a[0];
  for (int i=1; i<n; i++)
    if (a[i] > m)
      m = a[i];
  return m;
}

/**
 * Returns min of array.
 * @param   a  array
 * @param   n  size of array
 * @return     minimum of array
 */
int min(int a[], int n) {
  int m = a[0];
  for (int i=1; i<n; i++)
    if (a[i] < m)
      m = a[i];
  return m;
}

int main() {
  int a[4] = {3, 2, 7, 5};
  std::cout << min(a, 4) << std::endl;
  std::cout << max(a, 4) << std::endl;
}
