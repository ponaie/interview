/*************************************************************************
    > File Name: LeetCode/lc103-ZigzagLevelOrderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 08 Oct 2018 09:36:55 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
  vector<vector<int>> result;
  if (!root) return result;

  queue<TreeNode*> q;
  q.push(root);
  int level = 0;
  while (!q.empty()) {
    level++;
    int size = q.size();
    vector<int> oneLevel;
    for (int i = 0; i < size; ++i) {
      TreeNode* tmp = q.front();
      q.pop();

      oneLevel.push_back(tmp->val);

      if (tmp->left) q.push(tmp->left);
      if (tmp->right) q.push(tmp->right);
    }
    if (level % 2 == 0) std::reverse(oneLevel.begin(), oneLevel.end());
    result.push_back(oneLevel);
  }
  return result;
}

int main() {}
