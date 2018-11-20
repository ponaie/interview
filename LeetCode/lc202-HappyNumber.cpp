/*************************************************************************
    > File Name: LeetCode/lc202-HappyNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 20 Nov 2018 06:24:24 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_set>
using namespace std;

bool isHappy(int n) {
  unordered_set<int> s;
  while (n != 1) {
    int t = 0;
    while (n) {
      t += (n % 10) * (n % 10);
      n /= 10;
    }
    n = t;
    if (s.count(n))
      break;
    else
      s.insert(n);
  }
  return n == 1;
}

// bool isHappy(int n) {
//   unordered_set<int> s;
//   int digit, sum = 0;
//
//   while (true) {
//     digit = n % 10;
//     sum += digit * digit;
//     n /= 10;
//     if (n == 0) {
//       if (sum == 1) return true;
//       if (s.count(sum))
//         return false;
//       else
//         s.insert(sum);
//       n = sum;
//       sum = 0;
//     }
//   }
// }

int main() {}
