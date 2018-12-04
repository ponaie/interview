/*************************************************************************
    > File Name: LeetCode/lc61-RotateList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 03 Dec 2018 09:35:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *rotateRight(ListNode *head, int k) {
  if (!head) return NULL;
  int n = 1;
  ListNode *cur = head;
  while (cur->next) {
    ++n;
    cur = cur->next;
  }
  cur->next = head;
  int m = n - k % n;
  for (int i = 0; i < m; ++i) {
    cur = cur->next;
  }
  ListNode *newhead = cur->next;
  cur->next = NULL;
  return newhead;
}

// ListNode *rotateRight(ListNode *head, int k) {
//   if (!head) return head;
//   ListNode *p = head;
//   int len = 0;
//   while (p) {
//     p = p->next;
//     ++len;
//   }
//   int offset = k % len;
//   ListNode *slow = head, *fast = head;
//   for (int i = 0; i < offset; ++i) fast = fast->next;
//   while (fast->next) {
//     fast = fast->next;
//     slow = slow->next;
//   }
//   fast->next = head;
//   head = slow->next;
//   slow->next = nullptr;
//   return head;
// }

int main() {}
