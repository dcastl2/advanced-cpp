#include <iostream>
#include <assert.h>

/**
 * The program makes an assertion that argc is 2 (i.e. that there is exactly
 * one command-line argument.  If the condition in assert() is false, the
 * program exits.
 *
 * If the condition is true, then the program execution proceeds as normal.
 */
int main(int argc, char **argv) {
  assert(argc == 2);
  std::cout << argv[1] << std::endl;
}
