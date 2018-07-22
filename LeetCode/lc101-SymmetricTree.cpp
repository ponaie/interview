/*************************************************************************
    > File Name: LeetCode/lc101-SymmetricTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 22 Jul 2018 04:59:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isMirror(TreeNode* s, TreeNode* t) {
  if (!s && !t) return true;
  if (!s || !t) return false;

  return s->val == t->val && isMirror(s->left, t->right) &&
         isMirror(s->right, t->left);
}

bool isSymmetric(TreeNode* root) { return isMirror(root, root); }

int main() {}
