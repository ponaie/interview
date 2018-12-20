/*************************************************************************
    > File Name: LeetCode/lc283-MoveZeroes.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 12:21:24 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
  for (int i = 0, j = 0; i < nums.size(); ++i) {
    if (nums[i]) swap(nums[i], nums[j++]);
  }
}

// void moveZeroes(vector<int>& nums) {
//   for (int i = 0, j = 0; i < nums.size(); ++i) {
//     while (j < nums.size() && nums[j] != 0) ++j;
//     if (i > j) swap(nums[i], nums[j]);
//   }
// }

// void moveZeroes(vector<int> &nums) {
//   for (int i = 0, j = 0; i < nums.size(); ++i) {
//     if (nums[i]) {
//       if (i == j)
//         ++j;
//       else
//         swap(nums[i], nums[j++]);
//     }
//   }
// }
int main() {}
