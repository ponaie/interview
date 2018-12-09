/*************************************************************************
    > File Name: LeetCode/lc347-TopKFrequentElements.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 09 Dec 2018 10:14:53 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
  unordered_map<int, int> m;
  for (int n : nums) ++m[n];

  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 std::greater<pair<int, int>>> pq;
  for (auto p : m) {
    if (pq.size() == k) {
      if (p.second > pq.top().first) {
        pq.pop();
        pq.push({p.second, p.first});
      }
    } else {
      pq.push({p.second, p.first});
    }
  }

  vector<int> res;
  while (!pq.empty()) {
    res.push_back(pq.top().second);
    pq.pop();
  }
  return res;
}

int main() {}
