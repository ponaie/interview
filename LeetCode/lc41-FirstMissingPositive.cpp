/*************************************************************************
    > File Name: LeetCode/lc41-FirstMissingPositive.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 03 Jan 2019 10:33:45 AM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// O(n)
int firstMissingPositive(vector<int>& nums) {
  int n = nums.size();
  for (int i = 0; i < n; ++i) {
    while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
      swap(nums[i], nums[nums[i] - 1]);
    }
  }
  for (int i = 0; i < n; ++i) {
    if (nums[i] != i + 1) return i + 1;
  }
  return n + 1;
}

// O(nlogn)
// int firstMissingPositive(vector<int>& nums) {
//   sort(nums.begin(), nums.end());
//   int res = 1;
//   for (int i = 0; i < nums.size(); ++i) {
//     if (nums[i] == res) ++res;
//   }
//   return res;
// }

int main() {}
