Homework 6
==========

Select up to 64 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=8 days in advance of the due date (Sunday,
11/13/16 at 6:00 PM).


1. Reversal of a queue.
     [16] Write a function ``Queue *reverse(Queue *q)`` which returns 
     the reverse of a queue.


2. N-number queue rotations.
     [16] Write methods ``void Queue::lRotate(int n)`` and ``void
     Queue::rRotate(int n)`` which rotate the queue by n-number elements.


3. Check if queue is rotation.
     [32] Write a function ``bool isRotation(Queue *p, Queue *q)`` to
     tell if ``p`` is a rotation of ``q``.  The integrity of the queues
     should be maintained on return of the function.


4. Recursive reversal of a tree.
     [16]  Write a method ``void TreeNode::reverse()`` (with wrapper ``void
     Tree::reverse()`` ) which recursively reverses the tree.


5. Check if tree is balanced.
     [16] Write a method ``bool TreeNode::isBalanced()`` (with wrapper ``bool
     Tree::isBalanced()``) to tell if a tree is a balanced BST.  A tree is
     balanced if no left or right subtree has a height difference greater than
     1.


6. Printing trees level-order.
     [32]  Write a function ``void TreeNode::levelOrder(int n)`` with wrapper
     ``void Tree::levelOrder()`` to print a tree level-order using recursion.
     It is important to use recursion (the functions must not translate the
     tree to another data structure, or use any other cheap tricks).
