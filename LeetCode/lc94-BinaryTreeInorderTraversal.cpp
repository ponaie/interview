/*************************************************************************
    > File Name: LeetCode/lc94-BinaryTreeInorderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 29 Oct 2018 05:35:23 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode *root) {
  vector<int> result;
  if (!root) return result;

  stack<TreeNode *> s;
  TreeNode *tmp = root;
  while (tmp || !s.empty()) {
    if (tmp) {
      s.push(tmp);
      tmp = tmp->left;
    } else {
      tmp = s.top();
      s.pop();
      result.push_back(tmp->val);
      tmp = tmp->right;
    }
  }
  return result;
}

int main() {}
