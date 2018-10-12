/*************************************************************************
    > File Name: LeetCode/lc114-FlattenBinaryTreetoLinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 12 Oct 2018 10:39:45 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void flatten(TreeNode *root) {
  if (!root) return;

  flatten(root->left);
  flatten(root->right);

  TreeNode *tmp = root->right;
  root->right = root->left;
  root->left = nullptr;
  while (root->right) root = root->right;
  root->right = tmp;
}

int main() {}
