/*************************************************************************
    > File Name: LeetCode/lc75-SortColors.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 30 Oct 2018 11:04:51 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

// 计数排序
// void sortColors(vector<int>& nums) {
//   vector<int> color(3, 0);
//   for (int n : nums) color[n]++;
//   for (int i = 0, j = 0; i < 3; ++i) {
//     while (color[i]--) nums[j++] = i;
//   }
// }

void sortColors(vector<int>& nums) {
  int zero = -1, two = nums.size();
  for (int i = 0; i < two;) {
    if (nums[i] == 1)
      ++i;
    else if (nums[i] == 2)
      swap(nums[i], nums[--two]);
    else
      swap(nums[++zero], nums[i++]);
  }
}

int main() {}
