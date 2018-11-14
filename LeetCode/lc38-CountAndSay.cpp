/*************************************************************************
    > File Name: LeetCode/lc38-CountAndSay.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 14 Nov 2018 11:42:39 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

string countAndSay(int n) {
  if (n <= 0) return "";
  string res = "1";
  while (--n) {
    string cur = "";
    for (int i = 0; i < res.size(); ++i) {
      int cnt = 1;
      while (i + 1 < res.size() && res[i] == res[i + 1]) {
        ++cnt;
        ++i;
      }
      cur += to_string(cnt) + res[i];
    }
    res = cur;
  }
  return res;
}

int main() {}
