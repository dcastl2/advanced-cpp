Homework 6
==========

Select up to 64 points worth of problems.  You may earn +N extra credit points
if you submit the assignment N<=4 days in advance of the due date.

You must provide a Makefile and run.sh for the assignment [-64].

For this assignment, append all member functions of to the provided header file
for that class.  Implement all non-member functions in ``main.cpp``.  The
difference is important!  You cannot add to the public/private data of
``Node``, ``Stack``, or ``Queue``; you must keep them as such. 

**You must demonstrate all the functions you create in main.cpp!**  For
example, if you are doing list problems, load list with some numbers, such as
``2 3 5 7``. Then demonstrate your rotations, reversals, etc. by printing out
the list before/after the function call.  Label your output appropriately so
that it can be graded easily. 



1. Recursive reversal of a tree.
     [16]  Write a method ``void TreeNode::reverse()`` (with wrapper ``void
     Tree::reverse()`` ) which recursively reverses the tree.


2. Check if tree is a BST.
     [16] Write a method ``bool TreeNode::isBST()`` (with wrapper ``bool
     Tree::isBST()``) to tell if a tree is a BST.  A tree is a BST if all
     keys to the left of the current node are less than the key of this node;
     and if all keys to the right of the current node are greater than or equal
     to the key of this node.


3. Check if tree is balanced.
     [16] Write a method ``bool TreeNode::isBalanced()`` (with wrapper ``bool
     Tree::isBalanced()``) to tell if a tree is a balanced BST.  A tree is
     balanced if no left or right subtree has a height difference greater than
     1.


4. Printing trees level-order.
     [32]  Write a function ``void TreeNode::levelOrder(int n)`` with wrapper
     ``void Tree::levelOrder()`` to print a tree level-order using recursion.
     It is important to use recursion (the functions must not translate the
     tree to another data structure, or use any other cheap tricks).

     ``n`` is a parameter you can use to pretty-print the tree, as depicted
     below; if you do so, the grader will award you a couple of Fox stickers.

     ::

                    7
                 /     \
                3      13
              /  \    /  \
             2    5  11  17


5. Recursively creating a mirror image of a linked list.
     [16] Write a function ``void Node::mirrorImage()`` which appends the
     reverse of a linked list to itself.  If the original list consists of
     2->3->5->7, the resulting list will be 2->3->5->7->7->5->3->2.  


6. Recursively removing the bottom node of a stack.
     [16] Write a method recursive method ``void drop(Stack *s)`` which 
     recrusively pops off nodes of a stack, removes the bottom node, then
     re-constructs the remainder of the stack as it returns.


7. Recursively checking if a queue is sorted.
     [16] Write a method recursive method ``bool isSorted(Queue *q)`` checks
     if a queue is in sorted order.  Note that you cannot carry the size as
     a parameter.  You will need to ensure the queue maintains its integrity
     upon the function's return (while avoiding an infinite recursive cycle), 
     so you will need to re-construct it as you unwind the function stack.


8. Creating the map data structure.
     [32] A **map** is a generic data structure with a key-value pair.  Thus it
     has at least two fields: a key of type U, and a value of type V.  A map
     may be implemented as a special type of linked list, with a pointer to the
     next entry in the map.  It may be declared as follows:

       map<string,int> magic_power;

     A map minimally supports a default constructor, a method called *insert*
     which can insert a key/value pair into the map, and an accessor which
     uses the overloaded [] operator.  Below is an example of the insertion
     of a key/value pair into the map:

     ::

       magic_power.insert("Dog", 8);
       magic_power.insert("Cat", 12);
       magic_power.insert("Rabbit", 15);
       magic_power.insert("Mouse", 18);

     Then to access the value at a key, the [] operator can be used. For 
     example, to print an elemnt,  

       printf("Mouse's magic power: %d\n", magic_power["Mouse"]);

     Implement your own map data structure.  Create the header ``Map.h``
     and place your function implementations in it.  Demonstrate the use
     of the map in your ``main.cpp``.

