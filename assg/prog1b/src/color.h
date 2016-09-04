#ifndef COLOR_H
#define COLOR_H
#include <string>
using namespace std;

namespace color {

  string black   = "\033[0;30m";
  string red     = "\033[0;31m";
  string green   = "\033[0;32m";
  string yellow  = "\033[0;33m";
  string blue    = "\033[0;34m";
  string magenta = "\033[0;35m";
  string cyan    = "\033[0;36m";
  string white   = "\033[0;37m";
  string reset   = "\033[0;39m";

}

namespace font {

  string bold      = "\033[0;1m";
  string italic    = "\033[0;3m";
  string underline = "\033[0;4m";
  string strike    = "\033[0;9m";
  string normal    = "\033[0;0m";

}

#endif
