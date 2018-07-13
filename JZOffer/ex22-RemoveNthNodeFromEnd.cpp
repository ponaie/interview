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

// check head and n
ListNode* removeNthFromEnd(ListNode* head, int n) {
  if (!head) return head;

  ListNode dummy = ListNode(0);
  dummy.next = head;
  ListNode *forward, *current, *tmp;
  forward = current = &dummy;

  // n may be greater than size of list.
  while (n && forward->next) {
    forward = forward->next;
    --n;
  }
  while (forward->next) {
    forward = forward->next;
    current = current->next;
  }
  tmp = current->next;
  // tmp may be nullptr or head
  if (!tmp && tmp != head) {
    current->next = tmp->next;
    delete tmp;
  }

  return dummy.next;
}

int main() {}
