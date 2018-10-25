/*************************************************************************
    > File Name: LeetCode/lc260-SingleNumberIII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 10:32:15 AM CST
 ************************************************************************/

#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
  int diff = accumulate(nums.begin(), nums.end(), 0, bit_xor<int>());
  diff &= -diff;
  vector<int> res(2, 0);
  for (auto& a : nums) {
    if (a & diff)
      res[0] ^= a;
    else
      res[1] ^= a;
  }
  return res;
}

int main() {}
