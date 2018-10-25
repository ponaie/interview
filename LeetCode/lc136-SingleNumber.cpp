/*************************************************************************
    > File Name: LeetCode/lc136-SingleNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 10:06:55 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int singleNumber(vector<int>& nums) {
  int result = 0;
  for (int n : nums) result ^= n;
  return result;
}

int main() {}
