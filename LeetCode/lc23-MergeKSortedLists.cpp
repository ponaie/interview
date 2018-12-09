/*************************************************************************
    > File Name: LeetCode/lc23-MergeKSortedLists.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 09 Dec 2018 10:50:06 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

struct cmp {
  bool operator()(ListNode *a, ListNode *b) { return a->val > b->val; }
};

class Solution {
 public:
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    priority_queue<ListNode *, vector<ListNode *>, cmp> pq;
    for (auto list : lists) {
      if (list) pq.push(list);
    }

    ListNode dummy(0);
    ListNode *pre = &dummy;
    while (!pq.empty()) {
      ListNode *tmp = pq.top();
      pq.pop();
      pre->next = tmp;
      pre = pre->next;
      if (tmp->next) pq.push(tmp->next);
    }
    return dummy.next;
  }
};

int main() {}
