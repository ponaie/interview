/*************************************************************************
    > File Name: LeetCode/lc120-Triangle.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 02 Jan 2019 03:22:43 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int minimumTotal(vector<vector<int>>& triangle) {
  int n = triangle.size();
  vector<int> dp(triangle.back());
  for (int i = n - 2; i >= 0; --i) {
    for (int j = 0; j <= i; ++j) {
      dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
    }
  }
  return dp[0];
}

int main() {}
