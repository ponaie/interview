/*************************************************************************
    > File Name: LeetCode/lc155-MinStack.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 22 Jul 2018 10:26:00 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

class MinStack {
  public:
    MinStack() {}

    void push(int x) {
      s.push(x);
      if(trackMin.empty() || x<=trackMin.top()) trackMin.push(x);
    }

    void pop() {
      if(s.empty()) return;
      if(s.top()==trackMin.top()) trackMin.pop();
      s.pop();
    }

    int top() {
      return s.top();
    }

    int getMin() {
      return trackMin.top();
    }

  private:
    stack<int> s;
    stack<int> trackMin;
};

int main() {}
