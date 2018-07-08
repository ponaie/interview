/*************************************************************************
    > File Name: lc82-RemoveDuplicates.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 08 Jul 2018 10:12:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
  ListNode *dummy = new ListNode(0);
  dummy->next = head;
  ListNode *pre = dummy, *cur = head;
  bool duplicate = false;

  while (cur) {
    if (cur->next && cur->val == cur->next->val) {
      ListNode *temp = cur->next;
      cur->next = temp->next;
      delete temp;
      duplicate = true;
    } else if (duplicate) {
      pre->next = cur->next;
      delete cur;
      cur = pre->next;
      duplicate = false;
    } else {
      pre = cur;
      cur = cur->next;
    }
  }

  head = dummy->next;
  delete dummy;
  return head;
}

int main() {}
