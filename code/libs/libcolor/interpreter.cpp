#include <iostream>
#include <fstream>
#include <istream>
#include "coloration.h" 

int main(int argc, char **argv) {

  // Open either a file or stdin
  bool prompt = true;
  std::ifstream stream;
  if (argc == 2) {
    stream.open(argv[1]);
    prompt = false;
  }
  else stream.open("/dev/stdin");

  // Command/position variables for parsing later
  int position;
  std::string command = ""; 

  // Set initial colors to white
  clr::set_color("alpha", "red");
  clr::set_color("digit", "blue");
  clr::set_color("punct", "yellow");
  clr::set_color("arith", "green");
  clr::set_color("other", "white");

  // Begin interpretation
  do {
  
    // set command
    position = command.find("set ");
    if (position != std::string::npos) {
      command = command.substr(position+4, command.size()-1);
      position = command.find(" ");
      if (position != std::string::npos) {
        std::string type  = command.substr(0, position);
        std::string color = command.substr(position+1, command.size()-1);
        clr::set_color(type, color);
      }
      continue;
    }

    // typeout command
    position = command.find("typeout ");
    if (position != std::string::npos) {
      std::cout << "< ";
      clr::typeout(command.substr(position+8, command.size()-1));
      continue;
    }

    // print command
    position = command.find("print ");
    if (position != std::string::npos) {
      std::cout << "< ";
      clr::output(command.substr(position+6, command.size()-1));
      continue;
    }

    // give a prompt and accept input
    if (prompt) std::cout << "> " << std::flush;
  } while (getline(stream, command));

}
