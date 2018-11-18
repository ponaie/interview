/*************************************************************************
    > File Name: LeetCode/lc76-MinimumWindowSubstring.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 18 Nov 2018 11:44:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

string minWindow(string s, string t) {
  unordered_map<char, int> m;
  int cnt = 0, left = 0, minLen = s.size() + 1;
  string res;

  for (char ch : t) ++m[ch];
  for (int i = 0; i < s.size(); ++i) {
    if (--m[s[i]] >= 0) ++cnt;
    while (cnt == t.size()) {
      if (minLen > i - left + 1) {
        minLen = i - left + 1;
        res = s.substr(left, minLen);
      }
      if (++m[s[left]] > 0) --cnt;
      ++left;
    }
  }
  return res;
}

int main() {}
