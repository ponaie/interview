/*************************************************************************
    > File Name: LeetCode/lc91-DecodeWays.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 03 Jan 2019 11:29:48 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int numDecodings(string s) {
  if (s.empty()) return 0;
  vector<int> dp(s.size() + 1, 0);
  dp[0] = 1;
  for (int i = 1; i < dp.size(); ++i) {
    if (s[i - 1] != '0') dp[i] += dp[i - 1];
    if (i >= 2 && s.substr(i - 2, 2) <= "26" && s.substr(i - 2, 2) >= "10") {
      dp[i] += dp[i - 2];
    }
  }
  return dp.back();
}

// int numDecodings(string s) {
//   if (s.empty() || s.front() == '0') return 0;
//   int c1 = 1, c2 = 1;
//   for (int i = 1; i < s.size(); ++i) {
//     if (s[i] == '0') c1 = 0;
//     if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')) {
//       c1 = c1 + c2;
//       c2 = c1 - c2;
//     } else {
//       c2 = c1;
//     }
//   }
//   return c1;
// }

int main() {}
