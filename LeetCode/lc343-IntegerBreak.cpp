/*************************************************************************
    > File Name: LeetCode/lc343-IntegerBreak.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 02 Jan 2019 10:16:00 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int integerBreak(int n) {
  vector<int> dp(n + 1, -1);
  dp[1] = 1;
  for (int i = 2; i <= n; ++i) {
    for (int j = 1; j < i; ++j) {
      dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
    }
  }
  return dp[n];
}

int main() {}
