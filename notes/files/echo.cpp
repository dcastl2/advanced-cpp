#include <iostream>
#include <fstream>
#include <stdlib.h>

int main() {
  std::ifstream  infile("/dev/stdin");
  std::ofstream outfile("/dev/stdout");
  std::string s;
  while (getline(infile, s)) 
    outfile << s << std::endl;
}
