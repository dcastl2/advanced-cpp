#include <iostream>
#include "Cat.h"

int main() {

  Cat dex("Dexter", 20.0);
  dex.gainPounds(3.0);

  Cat tigger("Tigger", 4.0);
  tigger.gainPounds(496.0);

  Cat runt("Runt", 50.0);
  runt.gainPounds(.25);

  dex.describe();
  tigger.describe();
  runt.describe();

  int day;
  for (day = 1; day <= 7; day++) {
      tigger.gainPounds(-10.0);
      tigger.describe();
  }

}
