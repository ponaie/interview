/*************************************************************************
    > File Name: JZOffer/ex31-StackPushPopOrder.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 23 Jul 2018 10:38:01 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isPopOrder(vector<int> &push_seq, vector<int> &pop_seq) {
  stack<int> s;
  auto push_it = push_seq.begin();
  auto pop_it = pop_seq.begin();

  while (push_it != push_seq.end() || !s.empty()) {
    if (s.empty() || s.top() != (*pop_it)) {
      if(push_it==push_seq.end()) return false;
      s.push(*push_it);
      ++push_it;
    } else {
      s.pop();
      ++pop_it;
    }
  }

  return true;
}

int main() {
  bool result;
  vector<int> v1{1,2,3,4,5}, v2{4,3,5,1,2};
  result = isPopOrder(v1, v2);
  cout << (result? "True" : "False") << endl;
}
