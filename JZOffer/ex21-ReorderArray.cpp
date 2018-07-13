/*************************************************************************
    > File Name: ex21-ReorderArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 12 Jul 2018 11:37:38 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void ReorderOddEven(vector<int>& arr) {
  if (arr.empty()) return;
  auto head = arr.begin(), tail = arr.end() - 1;

  while (head != tail) {
    while (head != tail && (*head) % 2) {
      ++head;
    }
    while(head != tail && !((*tail) % 2)) {
      --tail;
    }
    if (head != tail) {
      int tmp = *head;
      *head = *tail;
      *tail = tmp;
    }
  }
}

int main() {
  vector<int> nums{1, 4, 6, 3, 5, 9, 8};
  ReorderOddEven(nums);

  for(auto n : nums)
    cout << n << " ";
  cout << endl;
}
