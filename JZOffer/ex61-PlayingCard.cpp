/*************************************************************************
    > File Name: JZOffer/ex61-PlayingCard.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 06 Nov 2018 10:52:11 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int compare(const void *arg1, const void *arg2) {
  return *(int *)arg1 - *(int *)arg2;
}

bool isContinuous(int *numbers, int length) {
  if (numbers == nullptr || length < 1) return false;

  qsort(numbers, length, sizeof(int), compare);

  int numberOfZero = 0;
  int numberOfGap = 0;

  for (int i = 0; i < length && numbers[i] == 0; ++i) ++numberOfZero;

  int small = numberOfZero;
  int big = small + 1;
  while (big < length) {
    if (numbers[small] == numbers[big]) return false;

    numberOfGap += numbers[big] - numbers[small] - 1;
    small = big;
    ++big;
  }
  return (numberOfGap > numberOfZero) ? false : true;
}

int main() {}
