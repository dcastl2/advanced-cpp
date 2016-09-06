#include <iostream>
#include <iomanip>
#include <fstream>

/**
 * Print file to stdout.
 * @param filename   name of file to print
 */
void print(std::string filename) {
  std::ifstream infile(filename.c_str());
  if (!infile.is_open())
    throw "Could not open file!";
  std::string s;
  int i=1;
  while (getline(infile, s))
    std::cout << std::setw(4) << i++ << "  " << s << std::endl;
}

int main() {

  std::string   filename;
  std::cout << "filename>  ";
  std::cin  >>  filename;

  /**
   * Attempt the division; if it fails, print the error message thrown by the
   * function.
   */
  try {
    print(filename);
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }

}
