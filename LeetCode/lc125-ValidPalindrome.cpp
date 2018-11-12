/*************************************************************************
    > File Name: LeetCode/lc125-ValidPalindrome.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 12 Nov 2018 07:04:49 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    int begin = 0, end = s.size() - 1;
    while (begin < end) {
      while (!isAlphanum(s[begin])) ++begin;
      while (!isAlphanum(s[end])) --end;
      if (begin < end && (s[begin] - 'A') % 32 != (s[end] - 'A') % 32)
        return false;
      ++begin;
      --end;
    }
    return true;
  }

  bool isAlphanum(char &ch) {
    if (ch >= 'a' && ch <= 'z') return true;
    if (ch >= 'A' && ch <= 'Z') return true;
    if (ch >= '0' && ch <= '9') return true;
    return false;
  }
};

int main() {}
