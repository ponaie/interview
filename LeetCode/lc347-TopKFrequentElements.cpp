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

// O(nlogk)
vector<int> topKFrequent(vector<int>& nums, int k) {
  unordered_map<int, int> m;
  for (int n : nums) ++m[n];

  priority_queue<pair<int, int>, vector<pair<int, int>>,
                 std::greater<pair<int, int>>>
      pq;
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

// O(nlog(n-k))
// vector<int> topKFrequent(vector<int>& nums, int k) {
//   unordered_map<int, int> map;
//   for (int num : nums) map[num]++;
//
//   vector<int> res;
//   // pair<first, second>: first is frequency,  second is number
//   priority_queue<pair<int, int>> pq;
//   for (auto it = map.begin(); it != map.end(); it++) {
//     pq.push(make_pair(it->second, it->first));
//     if (pq.size() > (int)map.size() - k) {
//       res.push_back(pq.top().second);
//       pq.pop();
//     }
//   }
//   return res;
// }

int main() {}
