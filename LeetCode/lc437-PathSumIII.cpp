/*************************************************************************
    > File Name: LeetCode/lc437-PathSumIII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 09 Oct 2018 08:55:07 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int pathCount(TreeNode* root, int sum, int pre) {
  if (!root) return 0;
  int curSum = pre + root->val;
  return (curSum == sum) + pathCount(root->left, sum, curSum) +
         pathCount(root->right, sum, curSum);
}

int pathSum(TreeNode* root, int sum) {
  if (!root) return 0;
  return pathCount(root, sum, 0) + pathSum(root->left, sum) +
         pathSum(root->right, sum);
}

// class Solution {
//  public:
//   int pathSum(TreeNode* root, int sum) {
//     unordered_map<int, int> m;
//     m[0] = 1;
//     return helper(root, sum, 0, m);
//   }
//
//   int helper(TreeNode* node, int sum, int curSum, unordered_map<int, int>& m) {
//     if (!node) return 0;
//     curSum += node->val;
//     int res = m[curSum - sum];
//     ++m[curSum];
//     res += helper(node->left, sum, curSum, m) +
//            helper(node->right, sum, curSum, m);
//     --m[curSum];
//     return res;
//   }
// }

int main() {
}
