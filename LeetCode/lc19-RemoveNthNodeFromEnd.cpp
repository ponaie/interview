/*************************************************************************
    > File Name: lc19-RemoveNthNode.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 13 Jul 2018 12:07:22 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
  ListNode dummy = ListNode(0);
  dummy.next = head;
  ListNode *pre = &dummy, *fast = &dummy;

  for (int i = 0; i < n; ++i) fast = fast->next;
  while (fast->next) {
    fast = fast->next;
    pre = pre->next;
  }
  ListNode* tmp = pre->next;
  pre->next = tmp->next;
  delete tmp;

  return dummy.next;
}

// Given n will alway be valid.
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//   ListNode dummy = ListNode(0);
//   dummy.next = head;
//   ListNode *forward, *current, *tmp;
//   forward = current = &dummy;
//
//   while (n && forward->next) {
//     forward = forward->next;
//     --n;
//   }
//   while (forward->next) {
//     forward = forward->next;
//     current = current->next;
//   }
//   tmp = current->next;
//   current->next = tmp->next;
//   delete tmp;
//
//   return dummy.next;
// }

int main() {}
