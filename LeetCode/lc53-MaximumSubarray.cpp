/*************************************************************************
    > File Name: LeetCode/lc53-MaximumSubarray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 18 Dec 2018 11:18:23 PM CST
 ************************************************************************/

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
  int res = INT_MIN, curSum = 0;
  for (int n : nums) {
    curSum = max(n, curSum + n);
    res = max(res, curSum);
  }
  return res;
}

int main() {}
