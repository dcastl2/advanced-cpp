#include <unistd.h>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

void print(tm *now) {
    cout <<                            (now->tm_year + 1900) << '-' 
         << setfill('0') << setw(2) << (now->tm_mon  + 1)    << '-' 
         << setfill('0') << setw(2) <<  now->tm_mday         << ' ' 
         << setfill('0') << setw(2) <<  now->tm_hour         << ':' 
         << setfill('0') << setw(2) <<  now->tm_min          << ':' 
         << setfill('0') << setw(2) <<  now->tm_sec 
         << endl;
}

int main() {
    time_t t;
    struct tm *now;
    while (true) {
      std::cout << std::string(80, '\n');
      t   = time(0);
      now = localtime( & t );
      print(now);
      sleep(1);
    }   
}
