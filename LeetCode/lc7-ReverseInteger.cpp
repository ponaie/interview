/*************************************************************************
    > File Name: LeetCode/lc7-ReverseInteger.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 16 Nov 2018 11:57:27 PM CST
 ************************************************************************/

#include <climits>
#include <iostream>
using namespace std;

// To check for overflow/underflow, we could check if ret > 214748364 or
// ret < –214748364 before multiplying by 10. On the other hand, we do
// not need to check if ret == 214748364, why?
int reverse(int x) {
  int res = 0;
  while (x != 0) {
    if (abs(res) > INT_MAX / 10) return 0;
    res = res * 10 + x % 10;
    x /= 10;
  }
  return res;
}

// int reverse(int x) {
//   long long res = 0;
//   while (x != 0) {
//     res = 10 * res + x % 10;
//     x /= 10;
//   }
//   return (res > INT_MAX || res < INT_MIN) ? 0 : res;
// }

// int reverse(int x) {
//   long long res = 0;
//   bool isPositive = true;
//   if (x < 0) {
//     isPositive = false;
//     x *= -1;
//   }
//   while (x > 0) {
//     res = res * 10 + x % 10;
//     x /= 10;
//   }
//   if (res > INT_MAX) return 0;
//   if (isPositive)
//     return res;
//   else
//     return -res;
// }

int main() {
  int result = reverse(INT_MIN);
  cout << result << endl;
}
