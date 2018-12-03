/*************************************************************************
    > File Name: LeetCode/lc237-DeleteNodeInALinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 03 Dec 2018 05:06:59 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

void deleteNode(ListNode* node) {
  ListNode* tmp = node->next;
  node->val = tmp->val;
  node->next = tmp->next;
  delete tmp;
}

int main() {}
