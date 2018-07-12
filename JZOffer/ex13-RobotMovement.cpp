/*************************************************************************
    > File Name: ex13-RobotMovement.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 12 Jul 2018 10:14:21 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool isIndexLegal(int threshold, int row, int col) {
  int sum = 0;

  while (row > 0) {
    sum += row % 10;
    row /= 10;
  }
  while (col > 0) {
    sum += col % 10;
    col /= 10;
  }

  return sum > threshold ? false : true;
}

int movingCountRecursive(int threshold, int rows, int cols, int row, int col,
                         vector<vector<bool>>& visited) {
  int count = 0;

  if (row < 0 || row >= rows || col < 0 || col >= cols || visited[row][col] ||
      !isIndexLegal(threshold, row, col))
    return 0;

  visited[row][col] = true;
  count = 1 +
          movingCountRecursive(threshold, rows, cols, row - 1, col, visited) +
          movingCountRecursive(threshold, rows, cols, row + 1, col, visited) +
          movingCountRecursive(threshold, rows, cols, row, col - 1, visited) +
          movingCountRecursive(threshold, rows, cols, row, col + 1, visited);

  return count;
}

int movingCount(int threshold, int rows, int cols) {
  if (threshold < 0 || rows < 0 || cols < 0) return 0;

  vector<vector<bool>> visited(rows, vector<bool>(cols, false));

  int count = movingCountRecursive(threshold, rows, cols, 0, 0, visited);

  return count;
}

int main() {
  // cout << (isIndexLegal(18, 35, 38) ? "True" : "False") << endl;
  cout << movingCount(4, 4, 4) << endl;
  cout << endl;
}
