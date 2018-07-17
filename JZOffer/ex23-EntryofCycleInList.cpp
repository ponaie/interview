/*************************************************************************
    > File Name: LeetCode/lc142-LinkedListCycleII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 17 Jul 2018 04:13:26 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

// Step 1. Check if list has cycle, and find the meeting node.
ListNode *hasCycle(ListNode *head) {
  ListNode *slow, *fast;
  slow = fast = head;

  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) return slow;
  }

  return nullptr;
}

ListNode *detectCycle(ListNode *head) {
  ListNode *meet = hasCycle(head);
  if (!meet) return nullptr;

  ListNode *slow, *fast;
  slow = fast = meet;
  int count = 0;

// Step 2. Moving from the meeting node, count steps when meeting again.
  do {
    count++;
    slow = slow->next;
    fast = fast->next->next;

  } while (slow != fast);

// Step 3. fast move count steps ahead, when fast and slow meet,
// that is the entry.
  slow = fast = head;
  while (count) {
    count--;
    fast = fast->next;
  }
  while (slow != fast) {
    slow = slow->next;
    fast = fast->next;
  }
  return slow;
}

int main() {}
