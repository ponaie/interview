/*************************************************************************
    > File Name: LeetCode/lc21-MergeTwoSortedLists.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 15 Jul 2018 09:50:57 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  ListNode dummy = ListNode(0);
  ListNode* cur = &dummy;

  while (l1 && l2) {
    if (l1->val > l2->val) {
      cur->next = l2;
      l2 = l2->next;
    } else {
      cur->next = l1;
      l1 = l1->next;
    }
    cur = cur->next;
  }

  if (l1) cur->next = l1;
  if (l2) cur->next = l2;

  return dummy.next;
}

int main() {
  ListNode t13 = ListNode(4);
  ListNode t12 = ListNode(2);
  ListNode t11 = ListNode(1);
  t12.next = &t13;
  t11.next = &t12;
  ListNode* l1 = &t11;
  ListNode t23 = ListNode(4);
  ListNode t22 = ListNode(3);
  ListNode t21 = ListNode(1);
  t22.next = &t23;
  t21.next = &t22;
  ListNode* l2 = &t21;

  ListNode* res = mergeTwoLists(l1, l2);

  while (res) {
    cout << res->val << " ";
    res = res->next;
  }
}
