/*************************************************************************
    > File Name: LeetCode/lc88-MergeSortedArray.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 31 Oct 2018 10:21:54 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void merge(int A[], int m, int B[], int n) {
  int count = m + n - 1;
  --m;
  --n;
  while (m >= 0 && n >= 0) A[count--] = A[m] > B[n] ? A[m--] : B[n--];
  while (n >= 0) A[count--] = B[n--];
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  vector<int> tmp(m + n);
  int i = 0, j = 0, k = 0;
  while (i < m && j < n) {
    if (nums1[i] < nums2[j])
      tmp[k++] = nums1[i++];
    else
      tmp[k++] = nums2[j++];
  }
  while (i < m) tmp[k++] = nums1[i++];
  while (j < n) tmp[k++] = nums2[j++];
  for (i = 0, k = 0; i < m + n;) nums1[i++] = tmp[k++];
}

int main() {}
