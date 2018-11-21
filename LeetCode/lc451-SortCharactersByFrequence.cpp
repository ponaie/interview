/*************************************************************************
    > File Name: LeetCode/lc451-SortCharactersByFrequence.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 21 Nov 2018 10:13:36 AM CST
 ************************************************************************/

#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <unordered_map>
using namespace std;

// multimap RedBlackTree
// string frequencySort(string s) {
//   string res;
//   map<char, int> freq;
//   multimap<int, char, std::greater<int>> freq2ch;
//
//   for (char ch : s) ++freq[ch];
//   for (auto p : freq) freq2ch.insert({p.second, p.first});
//   for (auto p : freq2ch) res.append(p.first, p.second);
//
//   return res;
// }

// Priority Queue
string frequencySort(string s) {
  string res = "";
  priority_queue<pair<int, char>> q;
  unordered_map<char, int> m;
  for (char c : s) ++m[c];
  for (auto a : m) q.push({a.second, a.first});
  while (!q.empty()) {
    auto t = q.top();
    q.pop();
    res.append(t.first, t.second);
  }
  return res;
}

int main() {}
