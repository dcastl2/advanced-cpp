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


struct character 
set(const char *name, 
    int hp,   
    int maxhp,
    int str,  
    int dex, 
    int con,
    int intl, 
    int wis, 
    int cha) {
  struct character c;
  strcpy(c.name, name);
  c.hp    = hp;
  c.maxhp = maxhp;
  c.stats[0]  = str;
  c.stats[1]  = dex;
  c.stats[2]  = con;
  c.stats[3]  = intl;
  c.stats[4]  = wis;
  c.stats[5]  = cha;
  return c;
}


string statnames[6] = { "STR", "DEX", "CON", "INT", "WIS", "CHA" };
void print(struct character c) {
  int i;
  cout << c.name << endl;
  cout << "  "   << "HP:  " << c.hp << "/" << c.maxhp << endl;
  for (i=0; i<6; i++) 
    cout << "  " << statnames[i] << ": " << c.stats[i] << endl;
 }


int main() {

  struct character *party;
  int size = 3*sizeof(struct character);
  party = (struct character *) malloc(size);

  party[0] = set("Maxwell",  4, 4, 12, 15, 10, 18, 17, 13);
  party[1] = set("Jordan",   6, 6, 10, 14, 12, 15, 18, 15);
  party[2] = set("Zachary", 10,10, 16, 14, 15, 16, 15, 12);

  int i;
  for (i=0; i<3; i++) 
    print(party[i]);

  ofstream outfile("characters.bin");  
  char *bytes = (char *)party;
  for (i=0; i<size; i++)
    outfile << bytes[i];
  cout << "These characters have been written to file." << endl;

  outfile.close();

}
