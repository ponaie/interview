/*************************************************************************
    > File Name: ex18-1-DeleteANode.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 08 Jul 2018 10:04:42 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int m_nValue;
  ListNode *m_pNext;
};

void DeleteNode(ListNode **pListHead, ListNode *pToBeDelete) {
  if (!*pListHead || !pToBeDelete) return;

  if (pToBeDelete->m_pNext != nullptr) {        // 被删除节点不是尾节点
    ListNode *pNext = pToBeDelete->m_pNext;
    pToBeDelete->m_nValue = pNext->m_nValue;
    pToBeDelete->m_pNext = pNext->m_pNext;
    delete pNext;
    pNext = nullptr;
  } else if (*pListHead == pToBeDelete) {      // 链表只有一个节点
    delete pToBeDelete;
    pToBeDelete = nullptr;
    *pListHead = nullptr;
  } else {
    ListNode *pNode = *pListHead;
    while (pNode->m_pNext != pToBeDelete) {    // 链表有多个节点，删除尾节点
      pNode = pNode->m_pNext;
    }
    pNode->m_pNext = nullptr;
    delete pToBeDelete;
    pToBeDelete = nullptr;
  }
}

int main() {}
