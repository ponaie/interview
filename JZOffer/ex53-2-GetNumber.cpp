/*************************************************************************
    > File Name: JZOffer/ex53-2-GetNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 28 Oct 2018 04:05:28 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int missingNumber(int nums[], int size) {
  int left = 0, right = size - 1;

  while(left < right) {
    int mid = left + ((right - left) >> 1);
    if(nums[mid]==mid) left = mid + 1;
    else right = mid;
  }
  return left;
}

int main() {
  int a[] = {0,1,2,3,4,5,6,8,9};
  int result = missingNumber(a, 9);
  cout << "Missing: " << result << endl;
}
