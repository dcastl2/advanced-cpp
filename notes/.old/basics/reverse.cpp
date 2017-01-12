/**
 * @file
 * @author  Dennis Castleberry <dcastl2@lsu.edu>
 * @section Description
 * This code generates the reverse of a string and returns the reverse.
 */

#include <iostream>

/**
 * Returns reverse of string s.
 * @param   s  string to be reversed
 * @return     reverse of string
 */
std::string reverse(std::string s) {
  int n = s.size();
  for (int i=0; i<n/2; i++)
    std::swap(s[i], s[n-i-1]);
  return s;
}

int main() {
  std::cout << reverse("marjoram") << std::endl;
}
