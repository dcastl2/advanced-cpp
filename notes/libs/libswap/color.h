#ifndef COLOR_H
#define COLOR_H

#include <string>

namespace color {

  std::string black   = "\033[0;30m";
  std::string red     = "\033[0;31m";
  std::string green   = "\033[0;32m";
  std::string yellow  = "\033[0;33m";
  std::string blue    = "\033[0;34m";
  std::string magenta = "\033[0;35m";
  std::string cyan    = "\033[0;36m";
  std::string white   = "\033[0;37m";
  std::string reset   = "\033[0;39m";

}

namespace font {

  std::string bold      = "\033[0;1m";
  std::string italic    = "\033[0;3m";
  std::string underline = "\033[0;4m";
  std::string strike    = "\033[0;9m";
  std::string normal    = "\033[0;0m";

}

#endif
