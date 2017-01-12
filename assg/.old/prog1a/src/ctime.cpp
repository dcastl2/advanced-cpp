#include <unistd.h>
#include <ctime>      // <~~~ Be sure to include ctime!
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Look up the ctime library on cplusplus.com for how to
 * access days, months, hours, etc.
 */
int main() {
    time_t t = time(0);
    struct tm *now = localtime( & t );
    cout << "The year is: " << (now->tm_year + 1900) << std::endl;
}
