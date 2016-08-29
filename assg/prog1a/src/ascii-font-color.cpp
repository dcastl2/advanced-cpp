#include <iostream>
#include <string>
#include <cstdlib>
#include "color.h"

using namespace std;
using namespace color;

int main() {
  string alphabet[][3] = {{    " * ",
                               "***",
                               "* *"},

                             { "** ",
                               "***",
                               "** "},
      
                             { " **",
                               "*  ",
                               " **"},
      
                             { "** ",
                               "* *",
                               "** "},
      
                             { "***",
                               "** ",
                               "***"},
      
                             { "***",
                               "** ",
                               "*  "},
      
                             { "** ",
                               "* *",
                               "***"},
      
                             { "* *",
                               "***",
                               "* *"},
      
                             { "***",
                               " * ",
                               "***"},
      
                             { "  *",
                               "  *",
                               "** "},
      
                             { "* *",
                               "** ",
                               "* *"},
      
                             { "*  ",
                               "*  ",
                               "***"},
      
                             { "***",
                               "***",
                               "* *"},
      
                             { "** ",
                               "* *",
                               "* *"},
      
                             { "***",
                               "* *",
                               "***"},
      
                             { "***",
                               "***",
                               "*  "},
      
                             { "***",
                               "* *",
                               "** "},
      
                             { "** ",
                               "***",
                               "* *"},
      
                             { " **",
                               " * ",
                               "** "},
      
                             { "***",
                               " * ",
                               " * "},
      
                             { "* *",
                               "* *",
                               "***"},
      
                             { "* *",
                               "* *",
                               " **"},
      
                             { "* *",
                               "***",
                               "***"},
      
                             { "* *",
                               " * ",
                               "* *"},
      
                             { "* *",
                               " * ",
                               " * "},
      
                             { "** ",
                               " * ",
                               " **"}};
      
  string input;
  std::cout << "> ";
  std::cin  >> input;

  for (int i = 0; i != input.size(); i++) {
    if(!(isalpha(input[i]))) {
      cerr << "Your string should only contain letters." << endl;
      exit(1);  
    }
    input[i] = tolower(input[i]);
  }
  
  int ascii[input.size()];
  for (int i = 0; i !=input.size(); i++)
    ascii[i] = input[i] - 97;
  
  string colors[] = {red, green, yellow, blue, magenta, cyan, white};
  for (int j=0; j!=3; j++) {
    int curr_letter = 0;
    int color_index  = 0;
    while(curr_letter != input.size()) {
      cout << colors[color_index]
           << alphabet[ascii[curr_letter]][j] 
           << reset << " ";
      curr_letter++;
      color_index++;
      if (color_index >= 7)
          color_index  = 0;
    }
    cout << endl;
  }
}
