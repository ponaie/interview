/*************************************************************************
    > File Name: JZOffer/ex40-LeastKNumbers.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 18 Oct 2018 04:49:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int partition(int *nums, int start, int end) {
  int tmp = nums[start];

  while (start < end) {
    while (start < end && nums[start] < nums[end]) --end;
    if (start < end) {
      nums[start] = nums[end];
      ++start;
    }
    while (start < end && nums[start] < nums[end]) ++start;
    if (start < end) {
      nums[end] = nums[start];
      --end;
    }
  }
  nums[start] = tmp;

  return start;
}

void LeastKNumbers(int *input, int size, int *output, int k) {
  if (!input || size <= 0 || k > size || k <= 0) return;

  int index = partition(input, 0, size - 1);
  while (index != k - 1) {
    if (index > k - 1)
      index = partition(input, 0, index - 1);
    else
      index = partition(input, index + 1, size - 1);
  }

  for (int i = 0; i < k; ++i) output[i] = input[i];
}

int main() {
  int a[] = {4, 7, 1, 8, 9, 5, 2, 6};
  int b[4];

  LeastKNumbers(a, 8, b, 4);

  for (auto e : b) cout << e << ' ';
  cout << endl;
}
