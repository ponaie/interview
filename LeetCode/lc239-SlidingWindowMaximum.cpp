/*************************************************************************
    > File Name: LeetCode/lc239-SlidingWindowMaximum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 04 Nov 2018 09:43:14 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  vector<int> result;
  deque<int> q;
  for (int i = 0; i < nums.size(); ++i) {
    if (!q.empty() && q.front() == i - k) q.pop_front();
    while (!q.empty() && nums[q.back()] < nums[i]) q.pop_back();
    q.push_back(i);
    if (i >= k - 1) result.push_back(nums[q.front()]);
  }
  return result;
}

int main() {}
