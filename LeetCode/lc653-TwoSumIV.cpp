/*************************************************************************
    > File Name: LeetCode/lc653-TwoSumIV.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 12 Nov 2018 05:57:06 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_set>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  bool findTarget(TreeNode *root, int k) {
    unordered_set<int> s;

    return dfsFind(root, k, s);
  }

  bool dfsFind(TreeNode *root, int k, unordered_set<int> &s) {
    if (!root) return false;
    if (s.count(k - root->val))
      return true;
    else
      s.insert(root->val);
    return dfsFind(root->left, k, s) || dfsFind(root->right, k, s);
  }

  // Level Order Traversal
  // bool findTarget(TreeNode *root, int k) {
  //   if (!root) return false;
  //   unordered_set<int> s;
  //   queue<TreeNode *> q{{root}};
  //   while (!q.empty()) {
  //     auto t = q.front();
  //     q.pop();
  //     if (s.count(k - t->val)) return true;
  //     s.insert(t->val);
  //     if (t->left) q.push(t->left);
  //     if (t->right) q.push(t->right);
  //   }
  //   return false;
  // }
};

int main() {}
