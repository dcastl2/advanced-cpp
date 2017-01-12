/**
 * This syntax is for defining a header file, or a place where function
 * prototypes for a library are held.
 */
#ifndef HELLO_H   // <~~~ if this file has not been included yet,
#define HELLO_H   //      then include this file

/**
 * Generally it is more concise to put includes for other libraries
 * in the header file. 
 */
#include <iostream>
#include <string>

/**
 * In order to avoid collisions with other library functions, it is
 * a good idea to organize functions in namespaces.
 */
namespace hi {

  /**
   * The function prototypes are essentially function signatures with
   * a semicolon on the end.  One does not need to put parameter names
   * in the parameter list of a prototype, but it is a good practice
   * to do so for documentation purposes.
   */
  void hello(); 
  void hello(std::string s);

};

/**
 * End any guards with an #endif directive.
 */
#endif
