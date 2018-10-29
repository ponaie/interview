/*************************************************************************
    > File Name: LeetCode/lc144-BinaryTreePreorderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 29 Oct 2018 04:33:08 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> preorderTraversal(TreeNode *root) {
  vector<int> res;
  stack<TreeNode *> s;
  TreeNode *p = root;
  while (!s.empty() || p) {
    if (p) {
      s.push(p);
      res.push_back(p->val);
      p = p->left;
    } else {
      TreeNode *t = s.top();
      s.pop();
      p = t->right;
    }
  }
  return res;
}

// vector<int> preorderTraversal(TreeNode *root) {
//   vector<int> result;
//   if (!root) return result;
//
//   stack<TreeNode *> s;
//   s.push(root);
//   TreeNode *tmp;
//   while (!s.empty()) {
//     tmp = s.top();
//     s.pop();
//     result.push_back(tmp->val);
//     if (tmp->right) s.push(tmp->right);
//     if (tmp->left) s.push(tmp->left);
//   }
//   return result;
// }

int main() {}
