/*************************************************************************
    > File Name: ex15-Numberof1Bits.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 05 Jul 2018 05:14:43 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int hanmmingWeight(int n) {
  int count = 0;

  while (n) {
    ++count;
    n = (n & (n - 1));
  }
  return count;
}

int main() {
  int num = -55;
  cout << hanmmingWeight(num) << endl;
}
