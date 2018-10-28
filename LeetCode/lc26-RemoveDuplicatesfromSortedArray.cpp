/*************************************************************************
    > File Name: LeetCode/lc26-RemoveDuplicatesfromSortedArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 28 Oct 2018 10:13:24 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  if (nums.empty()) return 0;

  int j = 0, n = nums.size();
  for (int i = 0; i < n; ++i) {
    if (nums[i] != nums[j]) nums[++j] = nums[i];
  }
  return j + 1;
}

int main() {}
