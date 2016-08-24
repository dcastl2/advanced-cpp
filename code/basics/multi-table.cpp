/**
 *  @file
 *  @author  Dennis Castleberry <dcastl2@lsu.edu>
 *  @brief   Produces multiplication table. 
 */
#include <iostream>
#include <iomanip>

/**
 *  Produces multiplication table of size n x n.
 *  @param   n  size of table
 */
void multitable(int n) {
  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) 
      std::cout << std::setw(4) << i*j;
    std::cout << std::endl;
  }
}

int main() {
  multitable(10);
}
