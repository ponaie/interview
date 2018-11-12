/*************************************************************************
    > File Name: LeetCode/lc345-ReverseVowelsOfAString.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 12 Nov 2018 07:17:09 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Solution {
 public:
  string reverseVowels(string s) {
    int begin = 0, end = s.size() - 1;
    while (begin < end) {
      if (!isVowel(s[begin]))
        ++begin;
      else if (!isVowel(s[end]))
        --end;
      else {
        char tmp = s[begin];
        s[begin] = s[end];
        s[end] = tmp;
        ++begin;
        --end;
      }
    }
    return s;
  }

  bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
  }
};

int main() {}
