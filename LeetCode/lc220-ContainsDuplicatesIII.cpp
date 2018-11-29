/*************************************************************************
    > File Name: LeetCode/lc220-ContainsDuplicatesIII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 29 Nov 2018 11:59:19 AM CST
 ************************************************************************/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
  set<int> window;

  for (int i = 0; i < nums.size(); i++) {
    if (i > k) window.erase(nums[i - k - 1]);
    auto pos = window.lower_bound((long long)nums[i] - t);
    if (pos != window.end() && *pos <= (long long)nums[i] + t) return true;
    window.insert(nums[i]);
  }
  return false;
}

int main() {}
