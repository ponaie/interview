/*************************************************************************
    > File Name: LeetCode/lc62-UniquePaths.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 19 Dec 2018 10:48:54 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int uniquePaths(int m, int n) {
  vector<int> res(n, 1);
  for (int i = 1; i < m; ++i) {
    for (int j = 1; j < n; ++j) {
      res[j] += res[j - 1];
    }
  }
  return res[n - 1];
}

int main() {}
