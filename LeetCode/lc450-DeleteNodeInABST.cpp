/*************************************************************************
    > File Name: LeetCode/lc450-DeleteNodeInABST.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 16 Dec 2018 12:53:03 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* deleteNode(TreeNode* root, int key) {
  if (!root) return root;
  if (root->val < key) {
    root->right = deleteNode(root->right, key);
  } else if (root->val > key) {
    root->left = deleteNode(root->left, key);
  } else {
    if (!root->right) return root->left;
    TreeNode* pt = root->right;
    while (pt->left) pt = pt->left;
    pt->left = root->left;
    return root->right;
  }
  return root;
}

int main() {}
