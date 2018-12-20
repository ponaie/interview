/*************************************************************************
    > File Name: LeetCode/lc89-GrayCode.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 20 Dec 2018 05:07:46 PM CST
 ************************************************************************/

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// G(n) = B(n+1) XOR B(n)
vector<int> grayCode(int n) {
  vector<int> res;
  for (int i = 0; i < pow(2, n); ++i) res.push_back((i >> 1) ^ i);
  return res;
}

// 镜面排列
// vector<int> grayCode(int n) {
//   vector<int> res{0};
//   for (int i = 0; i < n; ++i) {
//     int size = res.size();
//     for (int j = size - 1; j >= 0; --j) res.push_back((1 << i) | res[j]);
//   }
//   return res;
// }

int main() {}
