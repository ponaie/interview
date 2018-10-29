/*************************************************************************
    > File Name: JZOffer/ex53-3-GetNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 29 Oct 2018 09:53:01 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int GetNumberSameAsIndex(int nums[], int size) {
  if (!nums || size <= 0) return -1;

  int left = 0, right = size - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] == mid) return mid;
    if (nums[mid] > mid)
      right = mid - 1;
    else
      left = mid + 1;
  }
  return -1;
}

int main() {}
