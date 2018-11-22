/*************************************************************************
    > File Name: LeetCode/lc18-4Sum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 22 Nov 2018 08:03:56 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target) {
  set<vector<int>> res;
  sort(nums.begin(), nums.end());

  for (int i = 0; i < int(nums.size() - 3); ++i) {
    for (int j = i + 1; j < int(nums.size() - 2); ++j) {
      if (j > i + 1 && nums[j] == nums[j - 1]) continue;
      int left = j + 1, right = nums.size() - 1;
      while (left < right) {
        int sum = nums[i] + nums[j] + nums[left] + nums[right];
        if (sum == target) {
          vector<int> out{nums[i], nums[j], nums[left], nums[right]};
          res.insert(out);
          ++left;
          --right;

        } else if (sum < target)
          ++left;
        else
          --right;
      }
    }
  }
  return vector<vector<int>>(res.begin(), res.end());
}

int main() {}
