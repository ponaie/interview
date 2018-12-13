/*************************************************************************
    > File Name: LeetCode/lc129-SumRootToLeafNumbers.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 13 Dec 2018 08:42:13 PM CST
 ************************************************************************/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumNumbersDFS(TreeNode *root, int sum) {
  if (!root) return 0;
  sum = sum * 10 + root->val;
  if (!root->left && !root->right) return sum;
  return sumNumbersDFS(root->left, sum) + sumNumbersDFS(root->right, sum);
}

int sumNumbers(TreeNode *root) { return sumNumbersDFS(root, 0); }

// void getNumbers(TreeNode *root, int sum, vector<int> &nums) {
//   if (!root) return;
//   int n = sum * 10 + root->val;
//   if (!root->left && !root->right) {
//     nums.push_back(n);
//   }
//   getNumbers(root->left, n, nums);
//   getNumbers(root->right, n, nums);
// }
//
// int sumNumbers(TreeNode *root) {
//   vector<int> nums;
//   getNumbers(root, 0, nums);
//   return std::accumulate(nums.begin(), nums.end(), 0);
// }

int main() {}
