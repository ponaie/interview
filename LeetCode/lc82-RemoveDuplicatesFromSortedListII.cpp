/*************************************************************************
    > File Name: LeetCode/lc82-RemoveDuplicatesFromSortedListII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 02 Dec 2018 12:06:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
  ListNode dummy(0);
  dummy.next = head;
  ListNode *pre = &dummy;

  while (pre->next) {
    ListNode *cur = pre->next;
    while (cur->next && cur->val == cur->next->val) {
      ListNode *del = cur;
      cur = cur->next;
      delete del;
    }
    if (cur != pre->next) {
      ListNode *del = cur;
      pre->next = cur->next;
      delete del;
    } else
      pre = pre->next;
  }
  return dummy.next;
}

int main() {}
