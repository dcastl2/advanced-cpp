#include <map>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


// Calculate the sum of numbers from 1 to n.
void *sum(void *n) {
  int *res, *x = (int *) n;
  *res = (*x + 1)*(*x)/2;
  return res;
}



int main() {


  // Create map of string to function pointers.
  std::map<std::string, void *(*)(void *)> fun;


  // Insert the sum function into the map.
  fun.insert( std::pair<std::string, void *(*)(void *)>("sum", sum) );


  // Create pointers to hold the argument and return value.
  void *x = malloc(sizeof(int)); 
  void *y = malloc(sizeof(int));
  char cmd[16];
  char fn[16];


  // Accept functions.
  while (true) {

    // Print prompt, get information.
    printf("> ");

    // Scan function calls in and parse them.
    scanf("%s %d", fn, ((int *)x));

    // Convert C-string to string.
    std::string str(fn);

    // Call function. Print result.
    y = fun[str](x);
    printf("< %s(%d) = %d\n", fn, *((int *)x), *((int *)y));

  }


}
