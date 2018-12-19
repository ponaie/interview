/*************************************************************************
    > File Name: LeetCode/lc63-UniquePathsII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 19 Dec 2018 11:41:03 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& nums) {
  if (nums.empty() || nums[0].empty()) return 0;
  int m = nums.size(), n = nums[0].size();
  if (nums[0][0] == 1) return 0;
  vector<int> dp(n, 0);
  dp[0] = 1;
  for (int j = 0; j < m; ++j) {
    for (int i = 0; i < n; ++i) {
      if (nums[j][i] == 1)
        dp[i] = 0;
      else if (i > 0)
        dp[i] += dp[i - 1];
    }
  }
  return dp[n - 1];
}

int main() {}
