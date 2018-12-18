/*************************************************************************
    > File Name: LeetCode/lc692-TopKFrequentWords.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 18 Dec 2018 01:01:38 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

vector<string> topKFrequent(vector<string> &words, int k) {
  unordered_map<string, int> m;
  for (string w : words) ++m[w];

  auto cmp = [](pair<string, int> &a, pair<string, int> &b) {
    return a.second > b.second || (a.second == b.second && a.first < b.first);
  };
  priority_queue<pair<string, int>, vector<pair<string, int>>, decltype(cmp)> q(
      cmp);
  for (auto p : m) {
    q.push(p);
    if (q.size() > k) q.pop();
  }

  vector<string> res(k);
  for (int i = res.size() - 1; i >= 0; --i) {
    res[i] = q.top().first;
    q.pop();
  }
  return res;
}

int main() {}
