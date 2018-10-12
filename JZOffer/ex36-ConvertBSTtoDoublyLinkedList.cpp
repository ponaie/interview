/*************************************************************************
    > File Name: JZOffer/ex36-ConvertBSTtoDoublyLinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 12 Oct 2018 03:43:21 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct BinaryTreeNode {
  int m_nValue;
  BinaryTreeNode *m_pLeft;
  BinaryTreeNode *m_pRight;
};

void ConvertNode(BinaryTreeNode* pNode, BinaryTreeNode **pLastNodeInList) {
  if(!pNode) return;

  BinaryTreeNode *pCurrent = pNode;

  if(pCurrent->m_pLeft != nullptr)
    ConvertNode(pCurrent->m_pLeft, pLastNodeInList);

  pCurrent->m_pLeft = *pLastNodeInList;
  if(*pLastNodeInList != nullptr)
    (*pLastNodeInList)->m_pRight = pCurrent;

  *pLastNodeInList = pCurrent;

  if(pCurrent->m_pRight != nullptr)
    ConvertNode(pCurrent->m_pRight, pLastNodeInList);
}

BinaryTreeNode *ConvertNode(BinaryTreeNode* root) {
  BinaryTreeNode *pLastNodeInList = nullptr;
  ConvertNode(root, &pLastNodeInList);

  BinaryTreeNode *pHeadOfList = pLastNodeInList;
  while(pHeadOfList != nullptr && pHeadOfList->m_pLeft != nullptr)
    pHeadOfList = pHeadOfList->m_pLeft;

  return pHeadOfList;
}

int main() {}
