/*************************************************************************
    > File Name: lc225-ImplementStack.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 03 Jul 2018 12:13:36 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

class MyStack {
 public:
  /** Initialize your data structure here. */
  MyStack() {}

  /** Push element x onto stack. */
  void push(int x) {
    q.push(x);
    int sz = q.size();
    while(sz!=1) {
      q.push(q.front());
      q.pop();
      --sz;
    }
  }

  /** Removes the element on top of the stack and returns that element. */
  int pop() {
    int tmp = q.front();
    q.pop();
    return tmp;
  }

  /** Get the top element. */
  int top() { return q.front(); }

  /** Returns whether the stack is empty. */
  bool empty() { return q.empty(); }

 private:
  std::queue<int> q;
};

int main() {
  MyStack s = MyStack();
  s.push(5);
  s.push(2);
  s.push(3);
  s.push(1);
  s.push(4);
  cout << s.top() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
}
