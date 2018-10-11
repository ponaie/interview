/*************************************************************************
    > File Name: LeetCode/lc138-CopyListwithRandomPointer.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 11 Oct 2018 11:21:40 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct RandomListNode {
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

RandomListNode *copyRandomList(RandomListNode *head) {
  if (!head) return NULL;

  RandomListNode *cur = head;
  while (cur) {
    RandomListNode *tmp = new RandomListNode(cur->label);
    tmp->next = cur->next;
    cur->next = tmp;
    cur = tmp->next;
  }

  cur = head;
  while (cur) {
    if (cur->random) cur->next->random = cur->random->next;
    cur = cur->next->next;
  }

  RandomListNode *result = head->next;
  cur = head;
  while (cur) {
    RandomListNode *tmp = cur->next;
    cur->next = tmp->next;
    if (tmp->next) tmp->next = tmp->next->next;
    cur = cur->next;
  }

  return result;
}

int main() {}
