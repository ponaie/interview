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
  if (nums.back() < target) return nums.size();
  int left = 0, right = nums.size() - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] == target)
      return mid;
    else if (nums[mid] < target)
      left = mid + 1;
    else
      right = mid;
  }
  return right;
}

int main() {}
