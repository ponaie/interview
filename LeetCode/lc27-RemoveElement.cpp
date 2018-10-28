/*************************************************************************
    > File Name: LeetCode/lc27-RemoveElement.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 28 Oct 2018 07:26:37 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
  int res = 0;
  for (int i = 0; i < nums.size(); ++i) {
    if (nums[i] != val) nums[res++] = nums[i];
  }
  return res;
}

// int removeElement(vector<int>& nums, int val) {
//   int j = nums.size() - 1;
//   for (int i = 0; i <= j; ++i) {
//     while (j >= 0 && nums[j] == val) --j;
//     if (j >= 0 && i < j && nums[i] == val) swap(nums[i], nums[j--]);
//   }
//   return j + 1;
// }

int main() {
  // vector<int> nums{3,2,2,3};
  // int val = 3;
  // vector<int> nums{0,1,2,2,3,0,4,2};
  vector<int> nums{3, 3};
  int val = 3;
  int result = removeElement(nums, val);

  for (int i = 0; i < result; ++i) cout << nums[i] << ' ';
  cout << endl;
}
