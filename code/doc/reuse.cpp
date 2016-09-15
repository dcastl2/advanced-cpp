/**
 *  @file
 *  @author  Dennis Castleberry <dcastl2@lsu.edu>
 *  @brief   Find if a number is perfect.
 */
#include <iostream>
#include <cmath>


/**
 *  Checks if integer is prime. 
 *  @param   n  number to check
 *  @return     true if prime, false otherwise
 */
bool is_prime(int n) {
  for (int i=2; i<std::sqrt(n); i++)
    if (n%i == 0)
      return false;
  return true;
}


/**
 *  Find sum of proper divisors of integer. 
 *  @param   n  number whose divisors to sum
 *  @return     sum of proper divisors
 */
int sum_divisors(int n) {
  int s = 0;
  for (int i=1; i<n; i++)
    if (n%i == 0)
      s += i;
  return s;
}


/**
 *  Find product of proper divisors of integer. 
 *  @param   n  number whose divisors to multiply
 *  @return     product of proper divisors
 */
int product_divisors(int n) {
  int p = 1;
  for (int i=1; i<n; i++)
    if (n%i == 0)
      p *= i;
  return p;
}


/**
 *  Find if number is perfect.  A number is perfect if it is equal to the
 *  sum of its proper divisors.
 *  @param   n  number to check
 *  @return     true if perfect, false otherwise
 */
bool is_perfect(int n) {
  if (is_prime(n)) return false;
  else             return (sum_divisors(n)==product_divisors(n));
}


// Loop through numbers 0 to 99 and output message if number is perfect.
int main() {
  for (int i=0; i<100; i++)
    if (is_perfect(i))
      std::cout << i << " is perfect." << std::endl;
}
