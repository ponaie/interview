/*************************************************************************
    > File Name: LeetCode/lc107-BinaryTreeLevelOrderTraversalII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 08 Dec 2018 10:27:05 PM CST
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

void levelOrderRecursive(TreeNode *root, int level, vector<vector<int>> &res) {
  if (!root) return;
  if (res.size() == level) res.push_back({});
  res[level].push_back(root->val);
  levelOrderRecursive(root->left, level + 1, res);
  levelOrderRecursive(root->right, level + 1, res);
}

vector<vector<int>> levelOrderBottom(TreeNode *root) {
  vector<vector<int>> res;
  levelOrderRecursive(root, 0, res);
  return vector<vector<int>>(res.rbegin(), res.rend());
}

int main() {}
