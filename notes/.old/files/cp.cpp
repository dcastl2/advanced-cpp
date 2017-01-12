#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>

void usage(char *name) {
  std::cout << name << " file1 file2" << std::endl;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    usage(argv[0]);
    exit(EXIT_FAILURE);
  }
  std::ifstream  infile(argv[1]);
  std::ofstream outfile(argv[2]);
  std::string s;
  while (getline(infile, s)) 
    outfile << s << std::endl;
}
