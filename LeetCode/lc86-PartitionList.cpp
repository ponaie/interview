/*************************************************************************
    > File Name: LeetCode/lc86-PartitionList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 01 Dec 2018 04:11:11 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* partition(ListNode* head, int x) {
  ListNode dummy(0), less(0);
  dummy.next = head;
  ListNode *cur = &dummy, *less_head = &less;

  while (cur->next) {
    if (cur->next->val < x) {
      less_head->next = cur->next;
      cur->next = less_head->next->next;
      less_head = less_head->next;
    } else {
      cur = cur->next;
    }
  }
  less_head->next = dummy.next;
  return less.next;
}

int main() {}
