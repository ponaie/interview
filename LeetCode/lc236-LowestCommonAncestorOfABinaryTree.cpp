/*************************************************************************
    > File Name: LeetCode/lc236-LowestCommonAncestorOfABinaryTree.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 17 Dec 2018 11:15:24 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
  if (!root || root == p || root == q) return root;
  TreeNode* left = lowestCommonAncestor(root->left, p, q);
  if (left && left != p && left != q) return left;
  TreeNode* right = lowestCommonAncestor(root->right, p, q);
  if (left && right) return root;
  return left ? left : right;
}

int main() {}
