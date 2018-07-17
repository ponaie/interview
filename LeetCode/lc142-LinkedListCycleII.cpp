/*************************************************************************
    > File Name: LeetCode/lc142-LinkedListCycleII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 17 Jul 2018 04:37:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
  ListNode *fast, *slow;
  fast = slow = head;

  do {
    if (!fast || !fast->next) return nullptr;
    slow = slow->next;
    fast = fast->next->next;

  } while (slow != fast);

  slow = head;
  while (slow != fast) {
    slow = slow->next;
    fast = fast->next;
  }
  return slow;
}

int main() {}
