/*************************************************************************
    > File Name: LeetCode/lc167-TwoSumII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 07 Nov 2018 12:04:53 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
  int begin = 0, end = numbers.size() - 1;
  while (begin < end) {
    int sum = numbers[begin] + numbers[end];
    if (sum == target) return {begin + 1, end + 1};
    if (sum > target)
      --end;
    else
      ++begin;
  }
  return {};
}

int main() {}
