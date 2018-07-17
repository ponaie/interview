/*************************************************************************
    > File Name: LeetCode/lc92-ReverseLinkedListII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 17 Jul 2018 11:15:52 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int m, int n) {
  ListNode dummy = ListNode(0);
  dummy.next = head;
  ListNode *pre = &dummy, *cur, *post, *tmp;

  for (int i = 0; i < m - 1; i++) pre = pre->next;

  cur = post = pre->next;
  for (int i = 0; i <= n - m; i++) {
    tmp = cur;
    cur = cur->next;
    tmp->next = pre->next;
    pre->next = tmp;
  }
  post->next = cur;
  return dummy.next;
}

int main() {}
