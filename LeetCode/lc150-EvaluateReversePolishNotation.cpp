/*************************************************************************
    > File Name: LeetCode/lc150-EvaluateReversePolishNotation.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 05 Dec 2018 07:29:45 PM CST
 ************************************************************************/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int evalRPN(vector<string>& tokens) {
  stack<int> s;
  for (int i = 0; i < tokens.size(); ++i) {
    if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" &&
        tokens[i] != "/") {
      s.push(stoi(tokens[i]));

    } else {
      int op2 = s.top();
      s.pop();
      int op1 = s.top();
      s.pop();
      if (tokens[i] == "+") s.push(op1 + op2);
      if (tokens[i] == "-") s.push(op1 - op2);
      if (tokens[i] == "*") s.push(op1 * op2);
      if (tokens[i] == "/") s.push(op1 / op2);
    }
  }
  return s.top();
}

int main() {}
