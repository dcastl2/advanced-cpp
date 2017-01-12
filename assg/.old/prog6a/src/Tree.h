#ifndef TREE_H
#define TREE_H

#include <algorithm>

class TreeNode {
  private:
    int key;
    TreeNode *left;
    TreeNode *right;

  public:
    TreeNode(int key);
    void insert(int key);
    void preOrder();
    void inOrder();
    void postOrder();
    int  size();
    int  height();
};

class Tree {
  private:
    TreeNode *root;
  public:
    Tree();
    Tree(int *a, int n);
    void insert(int key);
    void preOrder();
    void inOrder();
    void postOrder();
    int  size();
    int  height();
};

TreeNode::TreeNode(int key) {
  this->key = key;
  left = right = NULL;
}

void TreeNode::insert(int key) {
  if (key <= this->key) 
    if (left)   left->insert(key);
    else        left = new TreeNode(key);
  else 
    if (right) right->insert(key);
    else       right = new TreeNode(key);
}

void TreeNode::inOrder() {
  if (left)  left->inOrder();
  std::cout << key << "\t";
  if (right) right->inOrder();
}

void TreeNode::preOrder() {
  std::cout << key << "\t";
  if (left)  left->preOrder();
  if (right) right->preOrder();
}

void TreeNode::postOrder() {
  if (left)  left->postOrder();
  if (right) right->postOrder();
  std::cout << key << "\t";
}

int TreeNode::size() {
  return 1 + (left  ? left->size()  : 0)
           + (right ? right->size() : 0);
}

int TreeNode::height() {
  return 1 + std::max(
                 (left  ? left->height()  : 0),
                 (right ? right->height() : 0)
                );
}

Tree::Tree() {
  root = NULL;
}

Tree::Tree(int *a, int n) {
  int i;
  root = new TreeNode(a[0]);
  for (i=1; i<n; i++)
    root->insert(a[i]);
}

void Tree::insert(int key) {
  if (root) root->insert(key);
  else      root = new TreeNode(key);
}

void Tree::inOrder() {
  if (root) root->inOrder();
  std::cout << std::endl;
}

void Tree::preOrder() {
  if (root) root->preOrder();
  std::cout << std::endl;
}

void Tree::postOrder() {
  if (root) root->postOrder();
  std::cout << std::endl;
}

int Tree::size() {
  if (!root) return 0;
  return root->size();
}

int Tree::height() {
  if (!root) return 0;
  return root->height();
}

#endif
