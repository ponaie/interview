/*************************************************************************
    > File Name: LeetCode/lc148-SortList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 02 Dec 2018 08:59:19 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* merge(ListNode* l1, ListNode* l2) {
  if (!l1) return l2;
  if (!l2) return l1;
  if (l1->val < l2->val) {
    l1->next = merge(l1->next, l2);
    return l1;

  } else {
    l2->next = merge(l1, l2->next);
    return l2;
  }
}

ListNode* sortList(ListNode* head) {
  if (!head || !head->next) return head;
  ListNode *slow = head, *fast = head, *pre = head;
  while (fast && fast->next) {
    pre = slow;
    slow = slow->next;
    fast = fast->next->next;
  }
  pre->next = NULL;
  return merge(sortList(head), sortList(slow));
}

int main() {}
