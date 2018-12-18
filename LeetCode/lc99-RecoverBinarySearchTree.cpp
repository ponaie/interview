/*************************************************************************
    > File Name: LeetCode/lc99-RecoverBinarySearchTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 18 Dec 2018 10:51:58 AM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(TreeNode *root, vector<TreeNode *> &list, vector<int> &vals) {
  if (!root) return;
  inorder(root->left, list, vals);
  list.push_back(root);
  vals.push_back(root->val);
  inorder(root->right, list, vals);
}

void recoverTree(TreeNode *root) {
  vector<TreeNode *> list;
  vector<int> vals;
  inorder(root, list, vals);
  sort(vals.begin(), vals.end());
  for (int i = 0; i < vals.size(); ++i) list[i]->val = vals[i];
}

int main() {}
