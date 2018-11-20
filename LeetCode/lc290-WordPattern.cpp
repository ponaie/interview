/*************************************************************************
    > File Name: LeetCode/lc290-WordPattern.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 20 Nov 2018 10:42:32 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string str) {
  // pattern和str都为空时，返回false有待商榷
  if (pattern.empty() && str.empty()) return false;

  map<char, int> p2i;
  map<string, int> w2i;
  istringstream in(str);
  int i = 0, n = pattern.size();
  for (string word; in >> word; ++i) {
    if (i == n || p2i[pattern[i]] != w2i[word]) return false;
    p2i[pattern[i]] = w2i[word] = i + 1;
  }
  return i == n;
}

// bool wordPattern(string pattern, string str) {
//   if (pattern.empty() && str.empty()) return false;
//   map<char, string> m;
//   set<string> s;
//
//   istringstream stream(str);
//   string tmp;
//   vector<string> strs;
//   while (stream >> tmp) {
//     strs.push_back(tmp);
//   }
//   if (pattern.size() != strs.size()) return false;
//
//   for (int i = 0; i < pattern.size(); ++i) {
//     if (m.count(pattern[i])) {
//       if (m[pattern[i]] != strs[i]) return false;
//
//     } else {
//       if (s.count(strs[i])) return false;
//       s.insert(strs[i]);
//       m[pattern[i]] = strs[i];
//     }
//   }
//
//   return true;
// }

int main() {}
