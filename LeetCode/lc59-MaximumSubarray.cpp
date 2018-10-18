/*************************************************************************
    > File Name: LeetCode/lc59-MaximumSubarray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 18 Oct 2018 09:59:04 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int>& nums, int left, int right) {
  if (left >= right) return nums[left];

  int mid = left + (right - left) / 2;
  int lmax = helper(nums, left, mid - 1);
  int rmax = helper(nums, mid + 1, right);

  int mmax = nums[mid], t = mmax;
  for (int i = mid - 1; i >= left; --i) {
    t += nums[i];
    mmax = max(mmax, t);
  }
  t = mmax;
  for (int i = mid + 1; i <= right; ++i) {
    t += nums[i];
    mmax = max(mmax, t);
  }
  return max(mmax, max(lmax, rmax));
}

int maxSubArray(vector<int>& nums) {
  return helper(nums, 0, nums.size() - 1);
}

// int maxSubArray(vector<int>& nums) {
//   int res = nums[0], curSum = 0;
//   for (int num : nums) {
//     curSum = max(curSum + num, num);
//     res = max(res, curSum);
//   }
//   return res;
// }

// int maxSubArray(vector<int>& nums) {
//   int sum = 0, result = nums[0];
//   for (int i = 0; i < nums.size(); ++i) {
//     if (sum <= 0)
//       sum = nums[i];
//     else
//       sum += nums[i];
//     result = max(sum, result);
//   }
//   return result;
// }

int main() {}
