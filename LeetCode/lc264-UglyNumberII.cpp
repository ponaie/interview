/*************************************************************************
    > File Name: LeetCode/lc264-UglyNumberII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 11:50:23 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int nthUglyNumber(int n) {
  vector<int> result(1, 1);

  int i2 = 0, i3 = 0, i5 = 0;
  while (result.size() < n) {
    int m2 = result[i2] * 2, m3 = result[i3] * 3, m5 = result[i5] * 5;
    int mn = min(m2, min(m3, m5));
    if (mn == m2) ++i2;
    if (mn == m3) ++i3;
    if (mn == m5) ++i5;
    result.push_back(mn);
  }

  return result.back();
}

int main() {}
