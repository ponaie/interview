/*************************************************************************
    > File Name: LeetCode/lc400-NthDigit.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 23 Oct 2018 10:11:24 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int findNthDigit(int n) {
  long long len = 1, cnt = 9, start = 1;

  while (n > len * cnt) {
    n -= len * cnt;
    ++len;
    cnt *= 10;
    start *= 10;
  }
  start += (n - 1) / len;
  string s = std::to_string(start);
  return s[(n - 1) % len] - '0';
}

int main() {
  cout << findNthDigit(14) << endl;
  cout << findNthDigit(15) << endl;
}
