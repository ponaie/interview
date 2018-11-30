/*************************************************************************
    > File Name: LeetCode/lc16-3SumCloset.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 24 Nov 2018 11:47:33 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
  int res = nums[0] + nums[1] + nums[2];
  sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 2; i++) {
    int left = i + 1, right = nums.size() - 1;
    while (left < right) {
      int sum = nums[i] + nums[left] + nums[right];
      if (abs(sum - target) < abs(res - target)) res = sum;
      if (sum < target)
        ++left;
      else
        --right;
    }
  }
  return res;
}

// int threeSumClosest(vector<int>& nums, int target) {
//   int closest = nums[0] + nums[1] + nums[2];
//   int diff = abs(closest - target);
//   sort(nums.begin(), nums.end());
//   for (int i = 0; i < nums.size() - 2; ++i) {
//     int left = i + 1, right = nums.size() - 1;
//     while (left < right) {
//       int sum = nums[i] + nums[left] + nums[right];
//       int newDiff = abs(sum - target);
//       if (diff > newDiff) {
//         diff = newDiff;
//         closest = sum;
//       }
//       if (sum < target)
//         ++left;
//       else
//         --right;
//     }
//   }
//   return closest;
// }

int main() {}
