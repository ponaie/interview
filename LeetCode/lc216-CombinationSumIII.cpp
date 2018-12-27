/*************************************************************************
    > File Name: LeetCode/lc216-CombinationSumIII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 27 Dec 2018 05:17:09 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void getCombination(int k, int n, int start, vector<int> &out,
                    vector<vector<int>> &res) {
  if (n == 0 && out.size() == k) {
    res.push_back(out);
    return;
  }
  if (n < 0 || out.size() > k) return;
  for (int i = start; i <= 9; ++i) {
    if (i > n) break;
    out.push_back(i);
    getCombination(k, n - i, i + 1, out, res);
    out.pop_back();
  }
}

vector<vector<int>> combinationSum3(int k, int n) {
  vector<vector<int>> res;
  vector<int> out;
  getCombination(k, n, 1, out, res);
  return res;
}

int main() {}
