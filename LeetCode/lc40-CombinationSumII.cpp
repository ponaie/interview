/*************************************************************************
    > File Name: LeetCode/lc40-CombinationSumII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 27 Dec 2018 05:00:39 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void getCombination(vector<int> &nums, int target, int pos, vector<int> &out,
                    vector<vector<int>> &res) {
  if (target == 0) {
    res.push_back(out);
    return;
  }
  if (target < 0) return;
  for (int i = pos; i < nums.size(); ++i) {
    if (nums[i] > target) break;
    if (i > pos && nums[i] == nums[i - 1]) continue;
    out.push_back(nums[i]);
    getCombination(nums, target - nums[i], i + 1, out, res);
    out.pop_back();
  }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
  vector<vector<int>> res;
  vector<int> out;
  sort(candidates.begin(), candidates.end());
  getCombination(candidates, target, 0, out, res);
  return res;
}

int main() {}
