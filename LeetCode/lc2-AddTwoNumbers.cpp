/*************************************************************************
    > File Name: LeetCode/lc2-AddTwoNumbers.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 01 Dec 2018 04:58:08 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode dummy(0);
  ListNode* result = &dummy;

  int sum = 0, carry = 0;
  while (l1 || l2) {
    int n1 = l1 ? l1->val : 0;
    int n2 = l2 ? l2->val : 0;
    sum = n1 + n2 + carry;
    carry = sum / 10;
    result->next = new ListNode(sum % 10);
    result = result->next;
    if (l1) l1 = l1->next;
    if (l2) l2 = l2->next;
  }
  if (carry) result->next = new ListNode(1);
  return dummy.next;
}

int main() {}
