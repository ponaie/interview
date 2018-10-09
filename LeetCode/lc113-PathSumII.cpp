/*************************************************************************
    > File Name: LeetCode/lc113-PathSumII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 09 Oct 2018 05:49:17 PM CST
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

void pathSearch(TreeNode *root, int sum, vector<int> &path,
             vector<vector<int>> &result) {
  if (!root) return;
  path.push_back(root->val);
  if (!root->left && !root->right && root->val == sum) result.push_back(path);
  pathSearch(root->left, sum - root->val, path, result);
  pathSearch(root->right, sum - root->val, path, result);
  path.pop_back();
}

vector<vector<int>> pathSum(TreeNode *root, int sum) {
  vector<vector<int>> result;
  vector<int> path;
  pathSearch(root, sum, path, result);
  return result;
}

int main() {}
