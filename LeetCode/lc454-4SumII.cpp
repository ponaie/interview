/*************************************************************************
    > File Name: LeetCode/lc454-4SumII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 22 Nov 2018 11:36:48 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C,
                 vector<int>& D) {
  unordered_map<int, int> m;
  for (int i = 0; i < C.size(); ++i)
    for (int j = 0; j < D.size(); ++j) m[C[i] + D[j]]++;

  int res = 0;
  for (int i = 0; i < A.size(); ++i)
    for (int j = 0; j < B.size(); ++j) {
      if (m.count(-A[i] - B[j])) res += m[-A[i] - B[j]];
    }

  return res;
}

int main() {}
