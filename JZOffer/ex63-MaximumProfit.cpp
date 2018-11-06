/*************************************************************************
    > File Name: JZOffer/ex63-MaximumProfit.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 06 Nov 2018 11:42:01 AM CST
 ************************************************************************/

#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int MaxDiff(vector<int> nums) {
  int min_num = nums[0], max_diff = std::numeric_limits<int>::min();
  for(int i = 1; i < nums.size(); ++i) {
    max_diff = std::max(max_diff, nums[i] - min_num);
    min_num = std::min(min_num, nums[i]);
  }
  return max_diff;
}

int main() {
  vector<int> data{9,11,8,5,7,12,16,14};
  int result = MaxDiff(data);
  cout << result << endl;
}
