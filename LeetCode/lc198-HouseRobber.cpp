/*************************************************************************
    > File Name: LeetCode/lc198-HouseRobber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 05 Jan 2019 11:24:01 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int rob(vector<int> &nums) {
  int rob = 0, notRob = 0;
  for (int i = 0; i < nums.size(); ++i) {
    int preRob = rob, preNotRob = notRob;
    rob = preNotRob + nums[i];
    notRob = max(preRob, preNotRob);
  }
  return max(rob, notRob);
}

// int rob(vector<int> &num) {
//   if (num.size() <= 1) return num.empty() ? 0 : num[0];
//   vector<int> dp = {num[0], max(num[0], num[1])};
//   for (int i = 2; i < num.size(); ++i) {
//     dp.push_back(max(num[i] + dp[i - 2], dp[i - 1]));
//   }
//   return dp.back();
// }

int main() {}
