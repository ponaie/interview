/*************************************************************************
    > File Name: LeetCode/lc-ContainsDuplicateII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 28 Nov 2018 11:28:00 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
  unordered_map<int, int> m;
  for (int i = 0; i < nums.size(); ++i) {
    if (m.count(nums[i]) && i - m[nums[i]] <= k) return true;
    m[nums[i]] = i;
  }
  return false;
}

int main() {}
