/*************************************************************************
    > File Name: LeetCode/lc25-ReverseNodesInk-Group.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 03 Dec 2018 04:18:34 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
  ListNode dummy(0);
  dummy.next = head;
  ListNode* pre = &dummy;

  while (pre->next) {
    int cnt = 0;
    ListNode* last = pre->next;
    while (last && cnt < k) {
      last = last->next;
      ++cnt;
    }
    if (cnt == k) {
      ListNode *start = pre->next, *post = last, *tmp;
      last = pre->next;
      while (start != post) {
        tmp = start;
        start = start->next;
        tmp->next = pre->next;
        pre->next = tmp;
      }
      last->next = post;
      pre = last;
    } else
      break;
  }
  return dummy.next;
}

int main() {}
