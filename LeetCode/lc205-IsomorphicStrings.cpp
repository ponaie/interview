/*************************************************************************
    > File Name: LeetCode/lc205-IsomorphicStrings.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 20 Nov 2018 11:29:54 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
  unordered_map<char, int> s2i;
  unordered_map<char, int> t2i;
  if (s.size() != t.size()) return false;

  for (int i = 0; i < s.size(); ++i) {
    if (s2i[s[i]] != t2i[t[i]]) return false;
    s2i[s[i]] = t2i[t[i]] = i + 1;
  }
  return true;
}

// replace map to array
// bool isIsomorphic(string s, string t) {
//   int m1[256] = {0}, m2[256] = {0}, n = s.size();
//   for (int i = 0; i < n; ++i) {
//     if (m1[s[i]] != m2[t[i]]) return false;
//     m1[s[i]] = i + 1;
//     m2[t[i]] = i + 1;
//   }
//   return true;
// }

int main() {}
