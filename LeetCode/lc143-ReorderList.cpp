/*************************************************************************
    > File Name: LeetCode/lc143-ReorderList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 04 Dec 2018 09:55:50 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

void reorderList(ListNode *head) {
  if (!head) return;
  ListNode *slow = head, *fast = head;
  while (fast->next && fast->next->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  ListNode *cur = slow->next, *tmp;
  slow->next = nullptr;
  while (cur) {
    tmp = slow->next;
    slow->next = cur;
    cur = cur->next;
    slow->next->next = tmp;
  }
  cur = slow->next;
  slow->next = nullptr;
  fast = head;
  while (cur) {
    tmp = fast->next;
    fast->next = cur;
    cur = cur->next;
    fast->next->next = tmp;
    fast = tmp;
  }
}

int main() {}
