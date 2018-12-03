/*************************************************************************
    > File Name: LeetCode/lc234-PalindromLinkedList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 03 Dec 2018 09:20:12 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

bool isPalindrome(ListNode *head) {
  if (!head || !head->next) return true;
  ListNode *slow = head, *fast = head;
  while (fast->next && fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  ListNode *last = slow->next, *pre = head;
  while (last->next) {
    ListNode *tmp = last->next;
    last->next = tmp->next;
    tmp->next = slow->next;
    slow->next = tmp;
  }
  while (slow->next) {
    slow = slow->next;
    if (pre->val != slow->val) return false;
    pre = pre->next;
  }
  return true;
}

int main() {}
