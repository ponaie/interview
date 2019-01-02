/*************************************************************************
    > File Name: LeetCode/lc64-MinimumPathSum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 02 Jan 2019 03:30:57 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
  if (grid.empty() || grid[0].empty()) return 0;
  int m = grid.size(), n = grid[0].size();
  vector<int> dp(grid[0]);
  for (int i = 1; i < n; ++i) dp[i] = dp[i] + dp[i - 1];
  for (int i = 1; i < m; ++i) {
    dp[0] += grid[i][0];
    for (int j = 1; j < n; ++j) {
      dp[j] = grid[i][j] + min(dp[j - 1], dp[j]);
    }
  }
  return dp[n - 1];
}

int main() {}
