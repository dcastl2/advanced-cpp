#include <iostream>
#include <fstream>
#include "color.h"

void usage(char *name) {
  std::cout << "usage: " << name << " file " << std::endl;
}

void colorize(char c) {
       if (c=='r') std::cout << color::red;
  else if (c=='g') std::cout << color::green;
  else if (c=='b') std::cout << color::blue;
  else if (c=='y') std::cout << color::yellow;
  else if (c=='m') std::cout << color::magenta;
  else if (c=='w') std::cout << color::white;
}

int main(int argc, char **argv) {

  if (argc != 2) usage(argv[0]);
  std::ifstream infile;

  try { 
    infile.open(argv[1]);
    if (!infile.is_open())
      throw "File could not be opened!";
  } 
  catch (const char *e) { 
    std::cerr << e << std::endl;
  }

  char c[1];
  while (infile.read(c, 1)) 
    if (*c == '[') {
      infile.read(c, 1);
      colorize(*c);
      infile.read(c, 1);
    }
    else std::cout << *c;
  infile.close();

}
