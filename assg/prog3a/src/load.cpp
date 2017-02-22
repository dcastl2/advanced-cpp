#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>

using namespace std;


struct character {
  char  name[16];
  int   stats[6];
  int   hp, maxhp;
};


string statnames[6] = { "STR", "DEX", "CON", "INT", "WIS", "CHA" };
void print(struct character c) {
  int i;
  cout << c.name << endl;
  cout << "  "   << "HP:  " << c.hp << "/" << c.maxhp << endl;
  for (i=0; i<6; i++) 
    cout << "  " << statnames[i] << ": " << stats[i] << endl;
 }


int main() {


  /* *****************************************************************
   * Uncomment this once you have loaded the data into the party array
   * to test to see if it works!
   * *****************************************************************
  int i;
  for (i=0; i<3; i++) 
    print(party[i]);
  */

}
