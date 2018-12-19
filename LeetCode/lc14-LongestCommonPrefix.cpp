/*************************************************************************
    > File Name: LeetCode/lc14-LongestCommonPrefix.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 19 Dec 2018 09:08:56 AM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Sort, then compare the first and the last to find common prefix
// string longestCommonPrefix(vector<string>& strs) {
//   if (strs.empty()) return "";
//   sort(strs.begin(), strs.end());
//   int i = 0, len = min(strs[0].size(), strs.back().size());
//   while (i < len && strs[0][i] == strs.back()[i]) ++i;
//   return strs[0].substr(0, i);
// }

string longestCommonPrefix(vector<string>& strs) {
  string res;
  if (strs.empty() || strs[0].empty()) return res;

  for (int i = 0; i < strs[0].size(); ++i) {
    char tmp = strs[0][i];
    for (int j = 1; j < strs.size(); ++j) {
      if (i > strs[j].size() || strs[j][i] != tmp) return res;
    }
    res.push_back(tmp);
  }
  return res;
}

int main() {}
