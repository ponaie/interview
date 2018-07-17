/*************************************************************************
    > File Name: JZOffer/ex26-HasSubtree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 17 Jul 2018 09:48:25 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  double val;
  TreeNode *left;
  TreeNode *right;
};

bool Equal(double num1, double num2) {
  return (num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001);
}

bool Tree1HasTree2(TreeNode *s, TreeNode *t) {
  if (!t) return true;
  if (!s) return false;

  return Equal(s->val, t->val) && Tree1HasTree2(s->left, t->left) &&
         Tree1HasTree2(s->right, t->right);
}

bool HasSubtree(TreeNode *s, TreeNode *t) {
  bool result = false;

  if (s != nullptr && t != nullptr) {
    if (Equal(s->val, t->val)) result = Tree1HasTree2(s, t);
    if (!result) result = Tree1HasTree2(s->left, t);
    if (!result) result = Tree1HasTree2(s->right, t);
  }

  return result;
}

int main() {}
