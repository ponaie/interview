/*************************************************************************
    > File Name: LeetCode/lc46-Permutations.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 15 Oct 2018 04:14:17 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    return result;
  }

  void permute(vector<int> &num, int start, vector<vector<int>> &res) {
    if (start >= num.size()) res.push_back(num);
    for (int i = start; i < num.size(); ++i) {
      swap(num[start], num[i]);
      permute(num, start + 1, res);
      swap(num[start], num[i]);
    }
  }
};

int main() {}
