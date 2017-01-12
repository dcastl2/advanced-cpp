#include <iostream>
//#include "Node.h"
#include "Tree.h"

int main() {

  int x[6] = {7, 3, 11, 2, 5, 13};
  Tree *t = new Tree(x, 6);
  t->levelOrder();

  /*
  Node<int> *head = new Node<int>(2);
  head->add(3);
  head->add(7);
  head->add(11);
  head->print();
  
  head->insert(5);
  head->print();

  head->deTail();
  head->print();
  */

}
