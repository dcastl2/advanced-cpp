#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>

void usage(char *name) {
  std::cout << name << " filename" << std::endl;
}

int main(int argc, char **argv) {
  if (argc != 2) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  std::ifstream infile(argv[1]);
  std::string s;
  while (getline(infile, s)) 
    std::cout <<  s << std::endl;
}
