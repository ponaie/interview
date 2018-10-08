/*************************************************************************
    > File Name: JZOffer/ex32-BFS.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 08 Oct 2018 11:06:38 AM CST
 ************************************************************************/


#include <iostream>
#include <queue>

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

void BFS(TreeNode *root) {
  if(!root) return;

  std::queue<TreeNode*> queueTreeNode;
  queueTreeNode.push(root);

  TreeNode *tmp;
  while(!queueTreeNode.empty()) {
    tmp = queueTreeNode.front();
    queueTreeNode.pop();
    std::cout << tmp->val << " ";

    if(tmp->left) queueTreeNode.push(tmp->left);
    if(tmp->right) queueTreeNode.push(tmp->right);
  }
  std::cout << std::endl;
}
