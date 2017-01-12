// Try typing the following commands. Thus will get rid
// of the using directive:
//
//  :%s/using.*//
//
// Then switch beginning of the line on 23 with // to comment it.
//
//  :23s/^/\/\/ /
//
// Finally transform the quotes into cout statements:
//
//  :25,26s/\"\(.*\)\"/std::cout << "\1" << std::endl;/
//
// Finally, use
//
//  :%s/\/\/.*//
//
// to remove all comments.

#include <iostream>
using namespace std;

This is supposed to be a comment.
int main() {
  "Hello, world!"
  "Hello, class!"
}
