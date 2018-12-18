/*************************************************************************
    > File Name: LeetCode/lc78-Subsets.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 18 Dec 2018 09:19:32 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums) {
  vector<vector<int>> res{{}};
  if (nums.empty()) return res;

  for (int i = 0; i < nums.size(); ++i) {
    int len = res.size();
    for (int j = 0; j < len; ++j) {
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
//   }
// }
//
// vector<vector<int>> subsets(vector<int> &nums) {
//   vector<vector<int>> res;
//   vector<int> out;
//   getSubsets(nums, 0, out, res);
//   return res;
// }

int main() {}
