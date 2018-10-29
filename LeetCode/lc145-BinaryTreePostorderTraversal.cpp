/*************************************************************************
    > File Name: LeetCode/lc145-BinaryTreePostorderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 29 Oct 2018 06:48:35 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> postorderTraversal(TreeNode* root) {
  if (!root) return {};
  vector<int> res;
  stack<TreeNode*> s{{root}};
  TreeNode* head = root;
  while (!s.empty()) {
    TreeNode* t = s.top();
    if ((!t->left && !t->right) || t->left == head || t->right == head) {
      res.push_back(t->val);
      s.pop();
      head = t;

    } else {
      if (t->right) s.push(t->right);
      if (t->left) s.push(t->left);
    }
  }
  return res;
}

// vector<int> postorderTraversal(TreeNode* root) {
//   vector<int> result;
//   if (!root) return result;
//
//   stack<TreeNode*> s;
//   s.push(root);
//   TreeNode* tmp;
//   while (!s.empty()) {
//     tmp = s.top();
//     s.pop();
//     result.insert(result.begin(), tmp->val);
//     if (tmp->left) s.push(tmp->left);
//     if (tmp->right) s.push(tmp->right);
//   }
//   return result;
// }

// vector<int> postorderTraversal(TreeNode* root) {
//   vector<int> res;
//   stack<TreeNode*> s;
//   TreeNode* p = root;
//   while (!s.empty() || p) {
//     if (p) {
//       s.push(p);
//       res.insert(res.begin(), p->val);
//       p = p->right;
//
//     } else {
//       TreeNode* t = s.top();
//       s.pop();
//       p = t->left;
//     }
//   }
//   return res;
// }

int main() {}
