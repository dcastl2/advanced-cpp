/**
 * Here is a demonstration or example code for a library. Typically when
 * libraries are written, they are accompanied by a code which shows how the
 * functions are used.
 */
#include "hello.h"

/**
 * Since the functions hello() and hello(std::string) are defined inside the
 * namspace hi, we must use the scope resolution operator (::) when calling them.
 * We could put the directive
 *
 *   using namespace hi;
 *
 * to avoid having to specify the namespace, but this could open us up to
 * name collisions with other functions we don't about.
 */
int main() {
  hi::hello();
  hi::hello("class");
}
