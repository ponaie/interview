/*************************************************************************
    > File Name: LeetCode/lc54-SpiralMatrix.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 22 Jul 2018 03:48:35 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
  vector<int> result;
  if (matrix.empty() || matrix[0].empty()) return result;
  int m = matrix.size(), n = matrix[0].size();
  int cycle = (m > n) ? (n + 1) >> 1 : (m + 1) >> 1;
  int p = m, q = n;

  for (int i = 0; i < cycle; i++, p -= 2, q -= 2) {
    // Left => right
    for (int col = i; col < i + q; col++) result.push_back(matrix[i][col]);
    // Top => bottom
    for (int row = i + 1; row < i + p; row++)
      result.push_back(matrix[row][i + q - 1]);
    if (p == 1 || q == 1) break;
    // Right => left
    for (int col = i + q - 2; col >= i; col--)
      result.push_back(matrix[i + p - 1][col]);
    // Bottom => Top
    for (int row = i + p - 2; row > i; row--) result.push_back(matrix[row][i]);
  }
  return result;
}

int main() {
  // vector<vector<int>> nums = {
  //     {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  vector<vector<int>> nums = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  vector<int> result;

  for (auto r : nums) {
    for (auto e : r) {
      cout << e << " ";
    }
    cout << endl;
  }

  cout << endl;
  result = spiralOrder(nums);
  for (auto r : result) cout << r << " ";
  cout << endl;
}
