/*************************************************************************
    > File Name: LeetCode/lc90-SubsetsII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 20 Dec 2018 05:21:49 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int> &nums) {
  vector<vector<int>> res{{}};
  vector<int> out;
  sort(nums.begin(), nums.end());
  int pre_size = 0, size = 0, j;
  for (int i = 0; i < nums.size(); ++i) {
    pre_size = size;
    size = res.size();
    j = (i > 0 && nums[i] == nums[i - 1]) ? pre_size : 0;
    for (; j < size; ++j) {
      res.push_back(res[j]);
      res.back().push_back(nums[i]);
    }
  }
  return res;
}

// void getSubsets(vector<int> &nums, int pos, vector<int> &out,
//                 vector<vector<int>> &res) {
//   res.push_back(out);
//   for (int i = pos; i < nums.size(); ++i) {
//     out.push_back(nums[i]);
//     getSubsets(nums, i + 1, out, res);
//     out.pop_back();
//     while (i + 1 < nums.size() && nums[i] == nums[i + 1]) ++i;
//   }
// }
//
// vector<vector<int>> subsetsWithDup(vector<int> &nums) {
//   vector<vector<int>> res;
//   vector<int> out;
//   sort(nums.begin(), nums.end());
//   getSubsets(nums, 0, out, res);
//   return res;
// }

int main() {}
