#include <iostream>
#include <fstream>

int main() {
  std::ifstream  infile( "in.txt");
  std::ofstream outfile("out.txt");
  char c[1];
  while (infile.read(c, 1)) 
    outfile.write(c, 1);
}
