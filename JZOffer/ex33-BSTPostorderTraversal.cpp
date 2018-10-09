/*************************************************************************
    > File Name: JZOffer/ex33-BSTPostorderTraversal.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 09 Oct 2018 04:27:00 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool IsSequenceOfBST(int sequence[], int length) {
  if (!sequence || length <= 0) return false;

  int root = sequence[length - 1];

  int i = 0;
  for (; i < length - 1; ++i)
    if (sequence[i] > root) break;

  int j = i;
  for (; j < length - 1; ++j)
    if (sequence[j] < root) return false;

  bool left = true;
  if (i > 0) left = IsSequenceOfBST(sequence, i);

  bool right = true;
  if (i < length - 1) right = IsSequenceOfBST(sequence + i, length - i - 1);

  return left && right;
}

int main() {
  // int seq[] = {5, 7, 6, 9, 11, 10, 8};
  int seq[] = {7, 4, 6, 5};

  bool result = IsSequenceOfBST(seq, 4);
  cout << (result ? "True" : "False") << endl;
}
