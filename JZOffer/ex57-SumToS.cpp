/*************************************************************************
    > File Name: JZOffer/ex57-SumToS.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 01 Nov 2018 11:47:39 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> FindNumbersWithSum(vector<int> nums, int s) {
  vector<int> result;
  int begin = 0, end = nums.size() - 1;

  while (begin < end) {
    int sum = nums[begin] + nums[end];
    if (sum == s) {
      result.push_back(nums[begin]);
      result.push_back(nums[end]);
    }
    if(sum > s) --end;
    else ++begin;
  }

  return result;
}

int main() {
  vector<int> data{1,2,4,7,11,15};
  int s = 15;

  vector<int> res = FindNumbersWithSum(data, s);
  for(auto e : res) cout << e << ' ';
  cout << endl;
}
