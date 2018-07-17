/*************************************************************************
    > File Name: LeetCode/lc572-SubtreeofAnotherTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 17 Jul 2018 09:28:24 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

bool equals(TreeNode* s, TreeNode* t) {
  if(!s && !t) return true;
  if(!s || !t) return false;

  return s->val == t->val && equals(s->left, t->left) &&
    equals(s->right, t->right);
}

bool isSubtree(TreeNode* s, TreeNode* t) {
  return s != nullptr && (equals(s, t) ||
      isSubtree(s->left, t) || isSubtree(s->right, t));
}

int main() {}
