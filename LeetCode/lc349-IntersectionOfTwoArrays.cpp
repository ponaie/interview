/*************************************************************************
    > File Name: LeetCode/lc349-IntersectionOfTwoArrays.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 19 Nov 2018 09:25:07 PM CST
 ************************************************************************/

#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
  set<int> res;
  set<int> s(nums1.begin(), nums1.end());

  for (int num : nums2) {
    if (s.count(num)) res.insert(num);
  }

  return vector<int>(res.begin(), res.end());
}

// vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//   vector<int> res;
//   int i = 0, j = 0;
//
//   sort(nums1.begin(), nums1.end());
//   sort(nums2.begin(), nums2.end());
//
//   while (i < nums1.size() && j < nums2.size()) {
//     if (nums1[i] < nums2[j])
//       ++i;
//     else if (nums1[i] > nums2[j])
//       ++j;
//     else {
//       if (res.empty() || res.back() != nums1[i]) {
//         res.push_back(nums1[i]);
//       }
//       ++i;
//       ++j;
//     }
//   }
//   return res;
// }

int main() {}
