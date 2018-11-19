/*************************************************************************
    > File Name: LeetCode/lc350-IntersectionOfTwoArraysII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 19 Nov 2018 10:02:12 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
  unordered_map<int, int> m;
  vector<int> res;

  for (int num : nums1) {
    ++m[num];
  }
  for (int num : nums2) {
    if (m[num]-- > 0) res.push_back(num);
  }
  return res;
}

// vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//   vector<int> res;
//   int i = 0, j = 0;
//
//   sort(nums1.begin(), nums1.end());
//   sort(nums2.begin(), nums2.end());
//
//   while (i < nums1.size() && j < nums2.size()) {
//     if (nums1[i] == nums2[j]) {
//       res.push_back(nums1[i]);
//       ++i;
//       ++j;
//
//     } else if (nums1[i] > nums2[j]) {
//       ++j;
//
//     } else {
//       ++i;
//     }
//   }
//   return res;
// }

int main() {}
