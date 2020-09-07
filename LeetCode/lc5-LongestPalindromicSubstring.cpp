/*************************************************************************
    > File Name: lc5-LongestPalindromicSubstring.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 07 Sep 2020 11:42:47 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void expandAroundCenter(string &s, int left, int right, int &start,
                        int &maxLen) {
  while (left >= 0 && right < s.size() && s[left] == s[right]) {
    --left;
    ++right;
  }
  if (maxLen < right - left - 1) {
    maxLen = right - left - 1;
    start = left + 1;
  }
}

string longestPalindrome(string s) {
  if (s.empty()) return "";
  int start = 0, maxLen = 0;
  for (int i = 0; i < s.size(); ++i) {
    expandAroundCenter(s, i, i, start, maxLen);
    expandAroundCenter(s, i, i + 1, start, maxLen);
  }
  return s.substr(start, maxLen);
}

int main() { cout << longestPalindrome("babad") << endl; }
