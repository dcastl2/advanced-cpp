#include <iostream>
#include <fstream>

int main() {
  std::ofstream outfile("hello.cpp");
  outfile << "#include <iostream>"                            << std::endl;
  outfile << ""                                               << std::endl;
  outfile << "int main() {"                                   << std::endl;
  outfile << "  std::cout << \"Hello, world!\" << std::endl;" << std::endl;
  outfile << "}"                                              << std::endl;
}
