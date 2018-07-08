/*************************************************************************
    > File Name: lc83-RemoveDuplicates.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 08 Jul 2018 10:19:55 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
  ListNode *cur = head, *tmp;

  while (cur) {
    if (cur->next && cur->val == cur->next->val) {
      tmp = cur->next;
      cur->next = tmp->next;
      delete tmp;
    } else {
      cur = cur->next;
    }
  }
  return head;
}

int main() {}
