/*************************************************************************
    > File Name: LeetCode/lc20-ValidParentheses.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 17 Nov 2018 11:35:39 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

class Solution {
 public:
  bool isValid(string s) {
    stack<char> stk;
    for (char ch : s) {
      if (ch == '(' || ch == '[' || ch == '{')
        stk.push(ch);
      else {
        if (stk.empty() || !isMatch(stk.top(), ch)) return false;
        stk.pop();
      }
    }
    return stk.empty();
  }

  bool isMatch(char ch1, char ch2) {
    return (ch1 == '(' && ch2 == ')') || (ch1 == '[' && ch2 == ']') ||
           (ch1 == '{' && ch2 == '}');
  }
};

int main() {}
