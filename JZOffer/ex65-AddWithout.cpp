/*************************************************************************
    > File Name: JZOffer/ex65-AddWithout.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 05 Nov 2018 04:20:27 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int add(int a, int b) {
  int sum, carry;
  do {
    sum = a ^ b;
    carry = (a & b) << 1;
    a = sum;
    b = carry;
  } while (b != 0);
  return a;
}

int main() {
  int result = add(5, 7);
  cout << result << endl;
}
