#ifndef QUEUE_H
#define QUEUE_H

#include <cstdlib>
#include <iostream>


/**
 * A QueueNode contains a key and a pointer to the next node in the queue.
 * The QueueNode constructor loads the key into the node.
 */
class QueueNode {
  public:
    int key;
    QueueNode *next;
    QueueNode(int);
};

QueueNode::QueueNode(int key) {
  this->key  = key;
  this->next = NULL;
}


/**
 * The Queue class has a pointer to the head (front) and tail (back) of the
 * queue.  It supports enqueue (add to back) and dequeue (remove from front)
 * operations.
 */
class Queue {
  private:
    QueueNode *head;
    QueueNode *tail;
    int size;
  public:
    Queue();
    void enqueue(int);
    int  dequeue();
    bool empty();
    int  getSize();
    void print();
};


/**
 * A new Queue has its head and tail pointers set to NULL.
 */
Queue::Queue() {
  head = tail = NULL;
  size = 0;
}


/**
 * A dequeue operation removes the node at the front of the queue and returns
 * the key that was in it.
 * @return  the key of the head node
 */
int Queue::dequeue() {
  int dekey = -1;
  QueueNode *newhead = head->next;
  if (size) {
    dekey = head->key;
    delete head;
    head  = newhead;
    size--;
  }
  return dekey;
}


/**
 * An enqueue operation adds a new node (with key) to the tail of the queue.
 * @param key  key to place in new node
 */
void Queue::enqueue(int key) {
  QueueNode *newtail = new QueueNode(key); 
  if (size) {
    tail->next = newtail;
    tail       = newtail;
  } else head = tail = newtail;
  size++;
}


/**
 * Tell if queue is empty.
 * @return  true if queue empty
 */
bool Queue::empty() {
  if (size)
    return false;
  return true;
}


/**
 * Return size of queue.
 * @return  size of queue
 */
int Queue::getSize() {
  return size;
}


/**
 * Print the queue, head to tail.
 */
void Queue::print() {
  QueueNode *node = head;
  while (node) {
    std::cout << '\t' << node->key;
    node = node->next;
  }
  std::cout << std::endl;
}


#endif 
