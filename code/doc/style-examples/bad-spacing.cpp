#include <iostream>


int sum (int n) {

  int  s  =  0;

  for (int i = 1;   i <= n;   i++)

  {

    s  =  s  +  i;

  }

  return  s;

}





int main() {

  std::cout  <<  sum(10000)  <<  std::endl;

}

