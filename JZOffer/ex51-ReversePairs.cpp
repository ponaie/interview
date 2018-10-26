/*************************************************************************
    > File Name: JZOffer/ex51-InversePair.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 05:22:26 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int InversePairs(int *data, int *copy, int start, int end) {
  if(start==end) {
    copy[start] = data[start];
    return 0;
  }

  int length = (end - start) / 2;

  int left = InversePairs(copy, data, start, start+length);
  int right = InversePairs(copy, data, start + length + 1, end);

  int i = start + length;
  int j = end;
  int indexCopy = end;
  int count = 0;
  while(i>=start && j>=start+length+1) {
    if(data[i]>data[i]) {
      copy[indexCopy--] = data[i--];
      count += j - start - length;
    } else {
      copy[indexCopy--] = data[j--];
    }
  }

  for(; i>=start; --i) copy[indexCopy--] = data[i];

  for(; j>=start + length + 1; --j) copy[indexCopy--] = data[j];

  return left + right + count;
}

int InversePairs(int *data, int length) {
  if(data==nullptr || length<0) return 0;

  int *copy = new int[length];
  for(int i=0; i<length; ++i) copy[i] = data[i];

  int count = InversePairs(data, copy, 0, length - 1);
  delete [] copy;

  return count;
}

int main() {}
