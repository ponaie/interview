/*************************************************************************
    > File Name: LeetCode/lc111-MinimumDepthOfBinaryTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 10 Dec 2018 09:47:20 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int minDepth(TreeNode *root) {
  if (!root) return 0;

  if (!root->left) return minDepth(root->right) + 1;
  if (!root->right) return minDepth(root->left) + 1;
  return min(minDepth(root->left), minDepth(root->right)) + 1;
}

int main() {}
