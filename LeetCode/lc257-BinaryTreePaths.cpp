/*************************************************************************
    > File Name: LeetCode/lc257-BinaryTreePaths.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 11 Dec 2018 10:39:41 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void binaryTreePaths(TreeNode *root, string s, vector<string> &res) {
  s += "->" + to_string(root->val);
  if (!root->left && !root->right) {
    res.push_back(s.substr(2));
    return;
  }
  if (root->left) binaryTreePaths(root->left, s, res);
  if (root->right) binaryTreePaths(root->right, s, res);
}

vector<string> binaryTreePaths(TreeNode *root) {
  vector<string> res;
  if (root) binaryTreePaths(root, "", res);
  return res;
}

int main() {}
