#include "Node.h"
#include "Stack.h"
#include "Queue.h"

int main() {

  Node *head = new Node(2);
  head->add(3);
  head->add(5);
  head->add(7);
  head->print();

  Stack s;
  s.push(1);
  s.push(1);
  s.push(2);
  s.push(3);
  s.print();

  Queue *q = new Queue;
  q->enqueue(1);
  q->enqueue(2);
  q->enqueue(4);
  q->enqueue(8);
  q->print();

}
