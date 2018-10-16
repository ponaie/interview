/*************************************************************************
    > File Name: LeetCode/lc77-Combinations.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 16 Oct 2018 09:51:41 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> out;
    combine(n, k, 1, out, res);
    return res;
  }

  void combine(int n, int k, int level, vector<int>& out,
               vector<vector<int>>& res) {
    if (out.size() == k) {
      res.push_back(out);
      return;
    }
    for (int i = level; i <= n; ++i) {
      out.push_back(i);
      combine(n, k, i + 1, out, res);
      out.pop_back();
    }
  }

  // vector<vector<int>> combine(int n, int k) {
  //   if (k > n || k < 0) return {};
  //   if (k == 0) return {{}};
  //   vector<vector<int>> res = combine(n - 1, k - 1);
  //   for (auto& a : res) a.push_back(n);
  //   for (auto& a : combine(n - 1, k)) res.push_back(a);
  //   return res;
  // }
};

int main() {}
