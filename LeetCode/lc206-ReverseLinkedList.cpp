/*************************************************************************
    > File Name: LeetCode/lc206-ReverseLinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 14 Jul 2018 11:42:19 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

// ListNode* reverseList(ListNode* head) {
//   ListNode dummy = ListNode(0);
//   ListNode *cur = head, *tmp;
//
//   while (cur) {
//     tmp = cur;
//     cur = cur->next;
//     tmp->next = dummy.next;
//     dummy.next = tmp;
//   }
//
//   return dummy.next;
// }

ListNode* reverseList(ListNode* head) {
  if (!head || !head->next) return head;
  ListNode* p = head;
  head = reverseList(p->next);
  p->next->next = p;
  p->next = NULL;
  return head;
}

int main() {}
