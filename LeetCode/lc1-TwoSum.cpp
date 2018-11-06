/*************************************************************************
    > File Name: LeetCode/lc1-TwoSum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 07 Nov 2018 12:01:40 AM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); ++i) {
    if (m.count(target - nums[i])) {
      return {i, m[target - nums[i]]};
    }
    m[nums[i]] = i;
  }
  return {};
}

int main() {}
