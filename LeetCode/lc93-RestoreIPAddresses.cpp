/*************************************************************************
    > File Name: LeetCode/lc93-RestoreIPAddresses.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 27 Dec 2018 10:40:41 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void restore(string s, int n, string out, vector<string> &res) {
  if (n == 4) {
    if (s.empty()) {
      out.pop_back();
      res.push_back(out);
    }
    return;
  }
  for (int i = 1; i <= 3; ++i) {
    if (i > s.size()) break;
    string str = s.substr(0, i);
    int val = std::stoi(str);
    if (val > 255 || i != std::to_string(val).size()) break;
    restore(s.substr(i), n + 1, out + str + ".", res);
  }
}

vector<string> restoreIpAddresses(string s) {
  vector<string> res;
  restore(s, 0, "", res);
  return res;
}

int main() {}
