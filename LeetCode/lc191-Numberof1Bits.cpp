/*************************************************************************
    > File Name: lc191-Numberof1Bits.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 05 Jul 2018 04:54:16 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// 输入限定非负数
// int hammingWeight(uint32_t n) {
//   int count = 0;
//   while (n != 0) {
//     if ((n & 1) == 1) ++count;
//     n = (n >> 1);
//   }
//   return count;
// }

// 对负数有效
int hammingWeight(int n) {
  int count = 0;
  int flag = 1;

  while (flag) {
    if (n & flag) ++count;
    flag = (flag << 1);
  }
  return count;
}

int main() {
  // uint32_t num = 73;
  int num = -55;
  cout << hammingWeight(num) << endl;
}
