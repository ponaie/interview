/*************************************************************************
    > File Name: LeetCode/lc9-PalindromNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 14 Dec 2018 01:35:50 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool isPalindromeNumber(int x) {
  if(x < 0 || (x % 10 == 0 && x != 0)) return false;
  int revertNum = 0;
  while(x > revertNum) {
    revertNum = revertNum * 10 + x % 10;
    x /= 10;
  }
  return x == revertNum || x == revertNum / 10;
}

int main() {}
