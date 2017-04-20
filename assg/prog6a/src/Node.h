#ifndef NODE_H
#define NODE_H

#include <cstdlib>
#include <iostream>

/**
 * The linked list is defined by a class Node, which contains a key and a 
 * pointer to the next node.  In this particular implementation, there is
 * no wrapper class (e.g. a class called List containing a head). The list
 * supports the adding of nodes to the back.
 */
class Node {

  private:
    int    key;
    Node *next;

  public:
    Node();
    Node(int key);
    void add(int key);
    void insert(int key);
    void print();
};


/**
 * By default, a new Node has its next pointer pointing to NULL.
 */
Node::Node() {
  key  = 0;
  next = NULL;
}


/**
 * The constructor for a new node loads the key into the node and sets its
 * next pointer to NULL.
 * @param key  key to load
 */
Node::Node(int key) {
  this->key = key;
  next = NULL;
}


/**
 * The add method for a new node loads the key into a node and inserts it
 * at the back of the list.
 * @param key  key to load
 */
void Node::add(int key) {
  Node *pos = this;
  while (pos->next)
    pos = pos->next;
  Node *newtail = new Node(key);
  pos->next = newtail;
}


/**
 * Print the list, starting from the head until NULL is encountered.
 */
void Node::print() {
  Node *pos = this;
  while (pos) {
    std::cout << '\t' << pos->key;
    pos = pos->next;
  }
  std::cout << std::endl;
}


#endif
