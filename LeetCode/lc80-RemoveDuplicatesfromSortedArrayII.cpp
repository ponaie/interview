/*************************************************************************
    > File Name: LeetCode/lc80-RemoveDuplicatesfromSortedArrayII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 28 Oct 2018 11:05:53 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  if (nums.empty()) return 0;

  int pre = 0, cur = 1, count = 1;
  while (cur < nums.size()) {
    if (nums[pre] == nums[cur] && count == 0)
      ++cur;
    else {
      if (nums[pre] == nums[cur])
        --count;
      else
        count = 1;
      nums[++pre] = nums[cur++];
    }
  }
  return pre + 1;
}

int main() {}
