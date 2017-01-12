#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
  private:
    T      key;
    Node *next;

  public:
    Node();
    Node(T key);
    void add(T key);
    void insert(T key);
    void deTail();
    void print();
};


template <class T>
Node<T>::Node() {
  next = NULL;
}


template <class T>
Node<T>::Node(T key) {
  this->key = key;
  next = NULL;
}


template <class T>
void Node<T>::add(T key) {
  Node *pos = this;
  while (pos->next)
    pos = pos->next;
  Node *newtail = new Node(key);
  pos->next = newtail;
}


template <class T>
void Node<T>::print() {
  Node *pos = this;
  while (pos) {
    std::cout << pos->key << "\t";
    pos = pos->next;
  }
  std::cout << std::endl;
}


template <class T>
void Node<T>::insert(T key) {
  Node *pos  = this;
  Node *node = new Node(key);
  while (pos->next) {
    if (key > pos->key && key < pos->next->key) {
      node->next = pos->next;
      pos->next  = node;
      return;
    }
    pos = pos->next;
  }
}


template <class T>
void Node<T>::deTail() {
  Node *pos = this;
  while (pos->next->next)
    pos = pos->next;
  Node *temp = pos->next;
  delete temp;
  pos->next = NULL;
}


#endif
