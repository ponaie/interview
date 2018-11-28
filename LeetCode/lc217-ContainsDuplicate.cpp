/*************************************************************************
    > File Name: LeetCode/lc217-ContainsDuplicate.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 28 Nov 2018 11:38:34 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
  unordered_set<int> s;
  for (int n : nums) {
    if (s.count(n))
      return true;
    else
      s.insert(n);
  }
  return false;
}

int main() {}
