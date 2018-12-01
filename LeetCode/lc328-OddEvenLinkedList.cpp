/*************************************************************************
    > File Name: LeetCode/lc328-OddEvenLinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 01 Dec 2018 04:31:03 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* oddEvenList(ListNode* head) {
  ListNode odd(0), even(0);
  even.next = head;
  ListNode *p = &even, *q = &odd;

  while (p->next) {
    q->next = p->next;
    p->next = q->next->next;
    if (p->next) p = p->next;
    q = q->next;
  }
  q->next = even.next;
  return odd.next;
}

int main() {}
