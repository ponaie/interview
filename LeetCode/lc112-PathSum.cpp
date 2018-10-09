/*************************************************************************
    > File Name: LeetCode/lc112-PathSum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 09 Oct 2018 05:46:03 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool hasPathSum(TreeNode *root, int sum) {
  if (!root) return false;
  if (!root->left && !root->right && root->val == sum) return true;
  return hasPathSum(root->left, sum - root->val) ||
         hasPathSum(root->right, sum - root->val);
}

int main() {}
