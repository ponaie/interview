/*************************************************************************
    > File Name: ex11.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 03 Jul 2018 04:00:17 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
  int low = 0, high = nums.size() - 1, mid;
  while (low < high) {
    mid = low + ((high - low) >> 1);
    if (nums[mid] == nums[high])
      --high;
    else if (nums[mid] < nums[high])
      high = mid;
    else
      low = mid + 1;
  }
  return nums[low];
}

int main() {
  // vector<int> test = {2,2,2,0,1,2};
  // vector<int> test = {3,3,1,3};
  vector<int> test = {1,3,3};
  int result = findMin(test);
  cout << result << endl;
}
