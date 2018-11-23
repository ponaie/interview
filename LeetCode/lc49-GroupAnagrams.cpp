/*************************************************************************
    > File Name: LeetCode/lc49-GroupAnagrams.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 23 Nov 2018 11:41:37 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<vector<string>> res;
  unordered_map<string, vector<string>> m;
  for (string str : strs) {
    string t = str;
    sort(t.begin(), t.end());
    m[t].push_back(str);
  }
  for (auto a : m) {
    res.push_back(a.second);
  }
  return res;
}

// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//   vector<vector<string>> res;
//   unordered_map<string, vector<string>> m;
//   for (string str : strs) {
//     vector<int> cnt(26, 0);
//     string t = "";
//     for (char c : str) ++cnt[c - 'a'];
//     for (int d : cnt) t += to_string(d) + "/";
//     m[t].push_back(str);
//   }
//   for (auto a : m) {
//     res.push_back(a.second);
//   }
//   return res;
// }

int main() {
  vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};
  vector<vector<string>> res = groupAnagrams(strs);

  for (auto v : res) {
    cout << "[";
    for (auto s : v) cout << s << ",";
    cout << "]";
  }
  cout << endl;
}
