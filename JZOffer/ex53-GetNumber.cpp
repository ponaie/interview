/*************************************************************************
    > File Name: JZOffer/ex53-GetNumber.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 26 Oct 2018 11:42:04 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// key第一次出现的位置
int lowerBound(int a[], int size, int key) {
  int begin = 0, end = size - 1, mid;

  while (begin < end) {
    mid = begin + (end - begin) / 2;
    if (a[mid] >= key)
      end = mid;
    else
      begin = mid + 1;
  }
  return begin;
}

// key最后一次出现的后一个位置
int upperBound(int a[], int size, int key) {
  int begin = 0, end = size - 1, mid;

  while (begin < end) {
    mid = begin + (end - begin) / 2;
    if (a[mid] <= key)
      begin = mid + 1;
    else
      end = mid;
  }
  return begin;
}

int GetNumber(int data[], int size, int key) {
  int result = 0;

  if (data && size > 0) {
    int first = lowerBound(data, size, key);
    int last = upperBound(data, size, key);
    cout << first << last << endl;

    if (first > -1 && last > -1) result = last - first;
  }

  return result;
}

int main() {
  int a[] = {1, 2, 3, 3, 3, 3, 4, 5};
  int res = GetNumber(a, 8, 3);
  cout << res << endl;
}
