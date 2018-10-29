/*************************************************************************
    > File Name: LeetCode/lc230-KthSmallestElementinaBST.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 29 Oct 2018 11:26:37 AM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Iteration
int kthSmallest(TreeNode* root, int k) {
  int cnt = 0;
  stack<TreeNode*> s;
  TreeNode* p = root;
  while (p || !s.empty()) {
    while (p) {
      s.push(p);
      p = p->left;
    }
    p = s.top();
    s.pop();
    ++cnt;
    if (cnt == k) return p->val;
    p = p->right;
  }
  return 0;
}

// Recursive
// int kthSmallestDFS(TreeNode* root, int& k) {
//   if (!root) return -1;
//   int val = kthSmallestDFS(root->left, k);
//   if (k == 0) return val;
//   if (--k == 0) return root->val;
//   return kthSmallestDFS(root->right, k);
// }
//
// int kthSmallest(TreeNode* root, int k) {
//   return kthSmallestDFS(root, k);
// }

int main() {}
