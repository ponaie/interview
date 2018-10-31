/*************************************************************************
    > File Name: LeetCode/lc110-BalancedBinaryTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 31 Oct 2018 09:01:45 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// int getDepth(TreeNode *root) {
//   if (!root) return 0;
//   return 1 + max(getDepth(root->left), getDepth(root->right));
// }
//
// bool isBalanced(TreeNode *root) {
//   if (!root) return true;
//   if (abs(getDepth(root->left) - getDepth(root->right)) > 1) return false;
//   return isBalanced(root->left) && isBalanced(root->right);
// }

int depth(TreeNode *root) {
  if (!root) return 0;
  int ldepth = depth(root->left);
  int rdepth = depth(root->right);
  if (ldepth == -1 || rdepth == -1 || abs(ldepth - rdepth) > 1)
    return -1;
  else
    return max(ldepth, rdepth) + 1;
}

bool isBalanced(TreeNode *root) { return !(depth(root) == -1); }

int main() {}
