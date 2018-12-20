/*************************************************************************
    > File Name: LeetCode/lc66-PlusOne.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 20 Dec 2018 10:32:17 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
  int sum = 0, carry = 1;
  for (int i = digits.size() - 1; i >= 0; --i) {
    sum = digits[i] + carry;
    carry = sum / 10;
    digits[i] = sum % 10;
  }
  if (carry) digits.insert(digits.begin(), 1);
  return digits;
}

// vector<int> plusOne(vector<int>& digits) {
//   int n = digits.size();
//   for (int i = n - 1; i >= 0; --i) {
//     if (digits[i] == 9)
//       digits[i] = 0;
//     else {
//       digits[i] += 1;
//       return digits;
//     }
//   }
//   if (digits.front() == 0) digits.insert(digits.begin(), 1);
//   return digits;
// }

int main() {}
