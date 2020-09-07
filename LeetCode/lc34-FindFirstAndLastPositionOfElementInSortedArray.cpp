/*************************************************************************
    > File Name: lc34-FindFirstAndLastPositionOfElementInSortedArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 07 Sep 2020 06:35:57 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int>& nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] >= target) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
  return left;
}

vector<int> searchRange(vector<int>& nums, int target) {
  vector<int> result(2, -1);
  int low = upperBound(nums, target);
  if (low == nums.size() || nums[low] != target) return result;
  int high = upperBound(nums, target + 1);
  result[0] = low;
  result[1] = high - 1;
  return result;
}

// int binarySearch(vector<int>& nums, int target) {
//   int left = 0, right = nums.size() - 1;
//   while (left <= right) {
//     int mid = left + (right - left) / 2;
//     if (nums[mid] == target) {
//       return mid;
//     } else if (nums[mid] > target) {
//       right = mid - 1;
//     } else {
//       left = mid + 1;
//     }
//   }
//   return -1;
// }
//
// vector<int> searchRange(vector<int>& nums, int target) {
//   int index = binarySearch(nums, target);
//   if (index == -1) return {-1, -1};
//   int low = index, high = index;
//   while (high + 1 < nums.size() && nums[high + 1] == target) ++high;
//   while (low > 0 && nums[low - 1] == target) --low;
//   return {low, high};
// }

int main() {}
