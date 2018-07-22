/*************************************************************************
    > File Name: LeetCode/lc226-InvertBinaryTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 22 Jul 2018 09:02:39 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *invertTree(TreeNode *root) {
  if (!root) return nullptr;
  TreeNode *tmp = root->left;
  root->left = root->right;
  root->right = tmp;

  invertTree(root->left);
  invertTree(root->right);

  return root;
}

int main() {}
