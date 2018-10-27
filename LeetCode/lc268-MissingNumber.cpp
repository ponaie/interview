/*************************************************************************
    > File Name: LeetCode/lc268-MissingNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 28 Oct 2018 04:15:10 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int missingNumber(vector<int>& nums) {
  int sum = 0, n = nums.size();
  for (auto& a : nums) {
    sum += a;
  }
  return 0.5 * n * (n + 1) - sum;
}

int main() {}
