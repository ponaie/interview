/*************************************************************************
    > File Name: test.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 06 Jul 2018 03:40:36 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// double powPositive(double x, int n) {
//   if (n == 0) return 1;
//   double res = powPositive(x, n / 2);
//   res *= res;
//   if (n % 2) res *= x;
//   return res;
// }
//
// double myPow(double x, int n) {
//   if (n >= 0) {
//     return powPositive(x, n);
//   } else {
//     return 1 / powPositive(x, -n);  // When n=-2147483648, -n overflows.
//                                     // n should be unsigned int.
//   }
// }

double myPow(double x, int n) {
  bool negPow = n < 0 ? true : false;
  n = abs(n);
  double res = 1;
  for (int i = 31; i >= 0; i--) {
    res = res * res;
    if (n & (1 << i)) res = res * x;
  }
  if (negPow) res = 1 / res;
  return res;
}

int main() {
  // int d = 2147483648;
  // d = -d;
  // cout << "-d: " << d << endl;

  int d = -2147483648;
  unsigned int ud = d;
  // cout << "ud: " << ud << endl;
  cout << "abs(d): " << abs(d) << endl;

  // cout << myPow(1, -2147483648) << endl;
  cout << myPow(2.1, 3) << endl;
}
