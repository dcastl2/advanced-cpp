#include "color.h"
#include <iostream>
#include <unistd.h>

namespace clr {

  std::string alpha_color, 
              digit_color, 
              punct_color, 
              arith_color,
              other_color;

  bool isarith(char c) {
    return ( 
             (c == '*') ||
             (c == '/') ||
             (c == '^') ||
             (c == '+') ||
             (c == '-')
           );
  }

  std::string color_of(std::string s) {
         if (s == "red")     return color::red;
    else if (s == "yellow")  return color::yellow;
    else if (s == "green")   return color::green;
    else if (s == "blue")    return color::blue;
    else if (s == "magenta") return color::magenta;
    else if (s == "white")   return color::reset;
  }

  void set_color(std::string t, std::string c) {
         if (t == "alpha") alpha_color = color_of(c);
    else if (t == "digit") digit_color = color_of(c);
    else if (t == "arith") arith_color = color_of(c);
    else if (t == "punct") punct_color = color_of(c);
    else if (t == "other") other_color = color_of(c);
  }

  void output(char c) {
         if (isalpha(c)) std::cout << alpha_color << c;
    else if (isdigit(c)) std::cout << digit_color << c;
    else if (isarith(c)) std::cout << arith_color << c;
    else if (ispunct(c)) std::cout << punct_color << c;
    else                 std::cout << other_color << c;
  }

  void output(std::string s) {
    for (int i=0; i<s.size(); i++)
      output(s[i]);
    std::cout << color_of("white") << std::endl;
  }

  void typeout(std::string s) {
    for (int i=0; i<s.size(); i++) {
      usleep(33333);
      output(s[i]);
      std::cout << std::flush;
    }
    std::cout << color_of("white") << std::endl;
  }

}

