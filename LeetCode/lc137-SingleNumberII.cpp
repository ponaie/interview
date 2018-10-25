/*************************************************************************
    > File Name: LeetCode/lc137-SingleNumberII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 11:21:33 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
  int one = 0, two = 0, three = 0;
  for (int i = 0; i < nums.size(); ++i) {
    two |= one & nums[i];
    one ^= nums[i];
    three = one & two;
    one &= ~three;
    two &= ~three;
  }
  return one;
}

int main() {}
