/*************************************************************************
    > File Name: LeetCode/lc233-NumberofDigitOne.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 18 Oct 2018 11:16:38 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int countDigitOne(int n) {
  int result = 0, a = 1, b = 1;

  while(n) {
    result += (n + 8) / 10 * a + (n % 10 == 1) * b;
    b += n % 10 * a;
    a *= 10;
    n /= 10;
  }
  return result;
}

int main() {}
