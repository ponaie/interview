/*************************************************************************
    > File Name: LeetCode/lc209-MinimumSizeSubarraySum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 13 Nov 2018 06:44:27 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

// O(n)
int minSubArrayLen(int s, vector<int>& nums) {
  int left = 0, right = 0, sum = 0, len = nums.size(), res = len + 1;
  while (right < len) {
    while (sum < s && right < len) {
      sum += nums[right++];
    }
    while (sum >= s) {
      res = min(res, right - left);
      sum -= nums[left++];
    }
  }
  return res == len + 1 ? 0 : res;
}

int main() {
  // vector<int> data{2,3,1,2,4,3};
  vector<int> data;
  int target = 7;
  int result = minSubArrayLen(target, data);
  cout << result << endl;
}
