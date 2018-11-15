/*************************************************************************
    > File Name: LeetCode/lc438-FindAllAnagramsInAString.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 15 Nov 2018 06:25:55 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
  if (s.empty()) return {};
  vector<int> result, m1(256, 0), m2(256, 0);

  for (int i = 0; i < p.size(); ++i) {
    ++m1[s[i]];
    ++m2[p[i]];
  }
  if (m1 == m2) result.push_back(0);
  for (int i = p.size(); i < s.size(); ++i) {
    ++m1[s[i]];
    --m1[s[i - p.size()]];
    if (m1 == m2) result.push_back(i - p.size() + 1);
  }
  return result;
}

// 滑动窗口
// vector<int> findAnagrams(string s, string p) {
//   if (s.empty()) return {};
//   vector<int> res, m(256, 0);
//   int left = 0, right = 0, cnt = p.size(), n = s.size();
//   for (char c : p) ++m[c];
//   while (right < n) {
//     if (m[s[right++]]-- >= 1) --cnt;
//     if (cnt == 0) res.push_back(left);
//     if (right - left == p.size() && m[s[left++]]++ >= 0) ++cnt;
//   }
//   return res;
// }

int main() {}
