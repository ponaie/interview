/*************************************************************************
    > File Name: LeetCode/lc541-ReverseStringII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 11:49:27 AM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string reverseStr(string s, int k) {
  for (int i = 0; i < s.size(); i += 2 * k) {
    reverse(s.begin() + i, min(s.begin() + i + k, s.end()));
  }
  return s;
}

int main() {
  string s = "abcdefg";
  cout << reverseStr(s, 3) << endl;
}
