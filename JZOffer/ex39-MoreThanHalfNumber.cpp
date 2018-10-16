/*************************************************************************
    > File Name: JZOffer/ex39-FindNumberOfHalfArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 16 Oct 2018 10:33:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int MoreThanHalfNum(int *nums, int length) {
  int result = nums[0];
  int times = 1;
  for(int i=1; i<length; ++i) {
    if(times==0) {
      result = nums[i];
      times = 1;
    }
    else if(nums[i]==result) {
      times++;
    } else {
      times--;
    }
  }
  return result;
}
// int MoreThanHalfNum(int *nums, int length) {
//   int middle = length >> 1;
//   int start = 0;
//   int end = length - 1;
//   int index = Partition(nums, length, start, end);
//
//   while(index != middle) {
//     if(index > middle) {
//       end = index - 1;
//       index = Partition(nums, length, start, end);
//     } else {
//       start = index + 1;
//       index = Partition(nums, length, start, end);
//     }
//   }
//
//   return nums[middle];
// }

int main() {}
