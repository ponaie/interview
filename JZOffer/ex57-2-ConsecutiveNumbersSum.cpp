/*************************************************************************
    > File Name: JZOffer/ex57-2-ConsecutiveNumbersSum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 12:13:51 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void PrintConsecutiveSequence(int small, int big) {
  for(int i=small; i<=big; ++i)
    cout << i << ' ';
  cout << endl;
}

void FindConsecutiveSequence(int sum) {
  if(sum < 3) return;

  int small = 1, big = 2, curSum = small + big;
  int middle = (1+sum)/2;

  while(small < middle) {
    while(curSum>sum && small<middle) {
      curSum -= small;
      small++;
    }
    if(curSum==sum) PrintConsecutiveSequence(small, big);
    big++;
    curSum += big;
  }
}

int main() {
  FindConsecutiveSequence(9);
}
