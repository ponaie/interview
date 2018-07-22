/*************************************************************************
    > File Name: LeetCode/lc59-SpiralMatrixII.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 22 Jul 2018 04:53:17 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
  vector<vector<int>> result(n, vector<int>(n, 0));
  int cycle = (n + 1) >> 1;
  int val = 1;

  for (int i = 0; i < cycle; i++, n -= 2) {
    for (int c = i; c < i + n; c++) result[i][c] = val++;
    for (int r = i + 1; r < i + n; r++) result[r][i + n - 1] = val++;
    if (n == 1) break;
    for (int c = i + n - 2; c >= i; c--) result[i + n - 1][c] = val++;
    for (int r = i + n - 2; r > i; r--) result[r][i] = val++;
  }
  return result;
}

int main() {}
