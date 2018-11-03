/*************************************************************************
    > File Name: LeetCode/lc189-RotateArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sat 03 Nov 2018 10:32:04 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// void rotate(vector<int>& nums, int k) {
//   if (nums.empty() || (k %= nums.size()) == 0) return;
//   int n = nums.size();
//   for (int i = 0; i < n - k; ++i) {
//     nums.push_back(nums[0]);
//     nums.erase(nums.begin());
//   }
// }

void rotate(vector<int>& nums, int k) {
  if (nums.empty() || (k %= nums.size()) == 0) return;
  reverse(nums.begin(), nums.end() - k);
  reverse(nums.end() - k, nums.end());
  reverse(nums.begin(), nums.end());
}

int main() {
  vector<int> nums{1, 2, 3, 4, 5, 6, 7};
  rotate(nums, 3);
  for (auto n : nums) cout << n << ',';
  cout << endl;
}
