/*************************************************************************
    > File Name: JZOffer/ex66-ProductArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 06 Nov 2018 03:21:56 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> multiply(const vector<int> &A) {
  vector<int> B(A);
  int length = A.size();

  if (length == 0) return {};
  if (length == 1) return {1};
  B[0] = 1;
  for (int i = 1; i < length; ++i) {
    B[i] = B[i - 1] * A[i - 1];
  }

  int tmp = 1;
  for (int i = length - 2; i >= 0; --i) {
    tmp *= A[i + 1];
    B[i] *= tmp;
  }
  return B;
}

int main() {}
