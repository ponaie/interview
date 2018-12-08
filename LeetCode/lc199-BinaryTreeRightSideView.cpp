/*************************************************************************
    > File Name: LeetCode/lc199-BinaryTreeRightSideView.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 08 Dec 2018 10:56:27 PM CST
 ************************************************************************/

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

vector<int> rightSideView(TreeNode* root) {
  vector<int> res;
  if (!root) return res;
  queue<TreeNode*> q;
  q.push(root);
  while (!q.empty()) {
    res.push_back(q.back()->val);
    int size = q.size();
    for (int i = 0; i < size; ++i) {
      TreeNode* tmp = q.front();
      q.pop();
      if (tmp->left) q.push(tmp->left);
      if (tmp->right) q.push(tmp->right);
    }
  }
  return res;
}

int main() {}
