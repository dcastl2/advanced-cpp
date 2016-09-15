#include <iostream>
#include <cstdlib>

int main() {

  // Set up array a with index i, limit, and num to read in.
  int  i = 0, limit=1, num;
  int *a = (int *)malloc(limit*sizeof(int));

  // Read in nums while able. If 0 entered, exit loop. Put num into
  // array.  If limit exceeded, double the capacity of the array.
  std::cout << "> ";
  while (std::cin >> num) {
    if (num == 0) break;             
    a[i++] = num;                    
    if (i>=limit) {                  
      limit *= 2;
      a = (int *)realloc(a, limit*sizeof(int));
    }
    std::cout << "> ";
  }

  // Print out array
  for (int j=0; j<i; j++)
    std::cout << a[j] << " ";
  std::cout << std::endl;

}
