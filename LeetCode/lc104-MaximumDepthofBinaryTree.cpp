/*************************************************************************
    > File Name: LeetCode/lc104-MaximumDepthofBinaryTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 31 Oct 2018 08:37:57 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// int maxDepth(TreeNode *root) {
//   if (!root) return 0;
//   return max(maxDepth(root->left), maxDepth(root->right)) + 1;
// }
int maxDepth(TreeNode *root) {
  if (!root) return 0;
  int res = 0;
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) {
    ++res;
    int n = q.size();
    for (int i = 0; i < n; ++i) {
      TreeNode *t = q.front();
      q.pop();
      if (t->left) q.push(t->left);
      if (t->right) q.push(t->right);
    }
  }
  return res;
}

int main() {}
