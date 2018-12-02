/*************************************************************************
    > File Name: LeetCode/lc24-SwapNodesInPairs.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 02 Dec 2018 01:31:33 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* swapPairs(ListNode* head) {
  ListNode dummy(0);
  dummy.next = head;
  ListNode* pre = &dummy;

  while (pre->next && pre->next->next) {
    ListNode* tmp = pre->next->next;
    pre->next->next = tmp->next;
    tmp->next = pre->next;
    pre->next = tmp;
    pre = tmp->next;
  }
  return dummy.next;
}

int main() {}
