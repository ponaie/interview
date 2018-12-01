/*************************************************************************
    > File Name: LeetCode/lc203-RemoveLinkedListElements.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 01 Dec 2018 10:15:54 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeElements(ListNode* head, int val) {
  ListNode dummy(0);
  dummy.next = head;
  ListNode *cur = &dummy, *tmp;

  while (cur->next) {
    if (cur->next->val == val) {
      tmp = cur->next;
      cur->next = tmp->next;
      delete tmp;

    } else
      cur = cur->next;
  }
  return dummy.next;
}

int main() {}
