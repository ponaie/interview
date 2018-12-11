/*************************************************************************
    > File Name: LeetCode/lc404-SumOfLeftLeaves.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 11 Dec 2018 09:59:03 AM CST
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

void sumOfLeft(TreeNode *root, bool left, int &sum) {
  if (!root) return;
  if (left && !root->left && !root->right) sum += root->val;
  sumOfLeft(root->left, true, sum);
  sumOfLeft(root->right, false, sum);
}

int sumOfLeftLeaves(TreeNode *root) {
  int res = 0;
  sumOfLeft(root, false, res);
  return res;
}

// int sumOfLeftLeaves(TreeNode *root) {
//   if (!root || (!root->left && !root->right)) return 0;
//   int res = 0;
//   queue<TreeNode *> q;
//   q.push(root);
//   while (!q.empty()) {
//     TreeNode *t = q.front();
//     q.pop();
//     if (t->left && !t->left->left && !t->left->right) res += t->left->val;
//     if (t->left) q.push(t->left);
//     if (t->right) q.push(t->right);
//   }
//   return res;
// }

int main() {}
