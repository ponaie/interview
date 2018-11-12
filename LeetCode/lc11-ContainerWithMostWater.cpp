/*************************************************************************
    > File Name: LeetCode/lc11-ContainerWithMostWater.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 12 Nov 2018 11:37:36 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
  int left = 0, right = height.size() - 1, result = 0;

  while (left < right) {
    result = max(result, (right - left) * min(height[left], height[right]));
    if (height[left] > height[right])
      --right;
    else
      ++left;
  }
  return result;
}

int main() {}
