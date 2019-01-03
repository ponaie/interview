/*************************************************************************
    > File Name: LeetCode/lc279-PerfectSquares.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 03 Jan 2019 03:35:40 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int numSquares(int n) {
  vector<int> dp(1, 0);
  while (dp.size() <= n) {
    int m = dp.size(), val = n;
    for (int i = 1; i * i <= m; ++i) {
      val = min(val, dp[m - i * i] + 1);
    }
    dp.push_back(val);
  }
  return dp.back();
}

// int numSquares(int n) {
//   vector<int> dp(n + 1, n);
//   dp[0] = 0;
//   for (int i = 0; i <= n; ++i) {
//     for (int j = 1; i + j * j <= n; ++j) {
//       dp[i + j * j] = min(dp[i + j * j], dp[i] + 1);
//     }
//   }
//   return dp.back();
// }

int main() {}
