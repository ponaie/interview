/*************************************************************************
    > File Name: LeetCode/lc350-SearchInsertPosition.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 25 Dec 2018 11:48:29 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int beg = 0, end = nums.size() - 1, mid;
  while (beg <= end) {
    mid = beg + (end - beg) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] > target)
      end = mid - 1;
    else
      beg = mid + 1;
  }
  return beg;
}

// int searchInsert(vector<int>& nums, int target) {
//   if (nums.back() < target) return nums.size();
//   int left = 0, right = nums.size() - 1;
//   while (left < right) {
//     int mid = left + (right - left) / 2;
//     if (nums[mid] == target)
//       return mid;
//     else if (nums[mid] < target)
//       left = mid + 1;
//     else
//       right = mid;
//   }
//   return right;
// }

int main() {}
