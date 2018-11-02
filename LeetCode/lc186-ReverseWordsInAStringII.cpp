/*************************************************************************
    > File Name: LeetCode/lc186-ReverseWordsInAStringII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 05:29:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void reverse(string &s, int left, int right) {
  while (left < right) {
    char t = s[left];
    s[left] = s[right];
    s[right] = t;
    ++left;
    --right;
  }
}

void reverseWords(string &s) {
  int left = 0;
  for (int i = 0; i <= s.size(); ++i) {
    if (i == s.size() || s[i] == ' ') {
      reverse(s, left, i - 1);
      left = i + 1;
    }
  }
  reverse(s, 0, s.size() - 1);
}

int main() {}
