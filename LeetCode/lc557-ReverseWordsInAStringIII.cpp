/*************************************************************************
    > File Name: LeetCode/lc557-ReverseWordsInAStringIII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 04:12:04 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string reverseWords(string s) {
  int start = 0, end = 0, n = s.size();
  while (start < n && end < n) {
    while (end < n && s[end] != ' ') ++end;
    for (int i = start, j = end - 1; i < j; ++i, --j) {
      swap(s[i], s[j]);
    }
    start = ++end;
  }
  return s;
}

int main() {}
