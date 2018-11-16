/*************************************************************************
    > File Name: LeetCode/lc7-ReverseInteger.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 16 Nov 2018 11:57:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int reverse(int x) {
  long long res = 0;
  bool isPositive = true;
  if (x < 0) {
    isPositive = false;
    x *= -1;
  }
  while (x > 0) {
    res = res * 10 + x % 10;
    x /= 10;
  }
  if (res > INT_MAX) return 0;
  if (isPositive)
    return res;
  else
    return -res;
}

int main() {}
