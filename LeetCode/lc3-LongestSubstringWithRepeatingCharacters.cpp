/*************************************************************************
    > File Name: LeetCode/lc3-LongestSubstringWithRepeatingCharacters.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 22 Oct 2018 04:48:14 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s) {
  vector<int> m(256, -1);
  int result = 0, left = -1;

  for (int i = 0; i < s.size(); ++i) {
    left = max(left, m[s[i]]);
    m[s[i]] = i;
    result = max(result, i - left);
  }
  return result;
}

int main() {
  string s("abcabcbb");

  int length = lengthOfLongestSubstring(s);
  cout << length << endl;
}
