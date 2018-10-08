/*************************************************************************
    > File Name: LeetCode/lc102-LevelOrderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 08 Oct 2018 11:49:27 AM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> levelOrder(TreeNode *root) {
  vector<vector<int>> result;
  if (!root) return result;

  queue<TreeNode *> nodesQueue;
  nodesQueue.push(root);

  while (!nodesQueue.empty()) {
    vector<int> oneLevel;
    int levelSize = nodesQueue.size();
    for (int i = 0; i < levelSize; ++i) {
      TreeNode *tmp = nodesQueue.front();
      nodesQueue.pop();
      oneLevel.push_back(tmp->val);
      if (tmp->left) nodesQueue.push(tmp->left);
      if (tmp->right) nodesQueue.push(tmp->right);
    }
    result.push_back(oneLevel);
  }
  return result;
}

// vector<vector<int>> levelOrder(TreeNode *root) {
//   vector<vector<int>> result;
//   levelOrder(root, 0, result);
//   return result;
// }
//
// void levelOrder(TreeNode *root, int level, vector<vector<int>> &result) {
//   if(!root) return;
//   if(result.size() == level) result.push_back({});
//   result[level].push_back(root->val);
//   if(root->left) levelOrder(root->left, level + 1, result);
//   if(root->right) levelOrder(root->right, level + 1, result);
// }

int main() {}
