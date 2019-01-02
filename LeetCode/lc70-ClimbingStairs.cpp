/*************************************************************************
    > File Name: LeetCode/lc70-ClimbingStairs.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 02 Jan 2019 11:21:16 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int climbStairs(int n) {
  int a = 0, b = 1, tmp;
  while (n--) {
    tmp = b;
    b += a;
    a = tmp;
  }
  return b;
}

int main() {}
