/*************************************************************************
    > File Name: LeetCode/lc108-ConvertSortedArrayToBinarySearchTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 16 Dec 2018 10:48:53 AM CST
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

TreeNode *sortedArrayToBST(vector<int> &nums, int left, int right) {
  if (left > right) return nullptr;
  int mid = left + (right - left) / 2;
  TreeNode *tmp = new TreeNode(nums[mid]);
  tmp->left = sortedArrayToBST(nums, left, mid - 1);
  tmp->right = sortedArrayToBST(nums, mid + 1, right);
  return tmp;
}

TreeNode *sortedArrayToBST(vector<int> &nums) {
  return sortedArrayToBST(nums, 0, nums.size() - 1);
}

int main() {}
