/*************************************************************************
    > File Name: LeetCode/lc263-UglyNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 09:59:02 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool isUgly(int num) {
  if (num <= 0) return false;

  while (num % 2 == 0) num /= 2;
  while (num % 3 == 0) num /= 3;
  while (num % 5 == 0) num /= 5;
  return num == 1;
}

int main() {}
