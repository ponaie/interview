/*************************************************************************
    > File Name: LeetCode/lc242-ValidAnagram.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 20 Nov 2018 05:50:15 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
  if (s.size() != t.size()) return false;

  int m[26] = {0};
  for (char ch : s) ++m[ch - 'a'];
  for (char ch : t) {
    if (--m[ch - 'a'] < 0) return false;
  }
  return true;
}

int main() {}
