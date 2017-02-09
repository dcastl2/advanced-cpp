#include <iostream>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <cmath>

void usage() {
  std::cout 
    << "  add a b     - add a and b"                   << std::endl
    << "  help        - print this message"            << std::endl
    << "  prime n     - tell if n is prime"            << std::endl
    << "  random a b  - random number between a and b" << std::endl
    << "  quit        - quit the interpreter"          
  ;
}


bool isPrime(int n) {
  int i;
  for (i=2; i<=std::sqrt(n); i++)
      if (n % i == 0)
         return false;
  return true;
}

int main() {

  std::string cmd;
  int a, b;

  srand(time(NULL) + getpid());
  std::cout << "> ";
  while (std::cin >> cmd) {
    if (cmd == "add") {
      std::cin >> a;
      std::cin >> b;
      std::cout << "< " << a+b;
    }
    else if (cmd == "random") {
      std::cin >> a;
      std::cin >> b;
      std::cout << "< " << rand() % (b-a) + a;
    }
    else if (cmd == "prime") {
      std::cin >> a;
      std::cout << "< " << (isPrime(a) ? "true" : "false");
    }
    else if (cmd == "help") {
      usage();
    }
    else if (cmd == "quit") {
      exit(1);
    }
    else {
      std::cout << "Command not recognized!";
    }
    std::cout << std::endl << "> ";
  }

}
