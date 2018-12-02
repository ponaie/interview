/*************************************************************************
    > File Name: LeetCode/lc147-InsertionSortList.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 02 Dec 2018 05:54:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *insertionSortList(ListNode *head) {
  ListNode dummy(0);

  while (head) {
    ListNode *start = &dummy;
    while (start) {
      if (!start->next || head->val < start->next->val) {
        ListNode *tmp = head;
        head = head->next;
        tmp->next = start->next;
        start->next = tmp;
        break;
      } else {
        start = start->next;
      }
    }
  }
  return dummy.next;
}

// Bubble Sort
// ListNode *insertionSortList(ListNode *head) {
//   ListNode *dummy = new ListNode(-1);
//
//   while (head) {
//     ListNode *cur = dummy;
//     while (cur->next && cur->next->val <= head->val) {
//       cur = cur->next;
//     }
//     ListNode *tmp = head->next;
//     head->next = cur->next;
//     cur->next = head;
//     head = tmp;
//   }
//   return dummy->next;
// }

int main() {}
