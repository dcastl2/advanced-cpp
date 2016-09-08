/**
 * We need to include the hello.h header file to define the functions whose
 * prototypes are listed in it.  Notice that we do not need to include any
 * libraries already included in hello.h.
 */
#include "hello.h"

/**
 * We define functions in the same namespace as the prototypes are specified
 * in. 
 */
namespace hi {

  void hello() {
    std::cout << "Hello, world!" << std::endl;
  }

  void hello(std::string s) {
    std::cout << "Hello, " << s << "!" << std::endl;
  }

};
/**
 * The contents of the namespace block always end in a semicolon.  There can be
 * multiple namespaces defined in a library. Namespaces can be nested.
 */
