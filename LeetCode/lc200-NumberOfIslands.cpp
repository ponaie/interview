/*************************************************************************
    > File Name: LeetCode/lc200-NumberOfIslands.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 28 Dec 2018 11:16:18 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void floodFill(vector<vector<char>> &grid, vector<vector<bool>> &visited, int x,
               int y) {
  if (x < 0 || x >= grid.size()) return;
  if (y < 0 || y >= grid[0].size()) return;
  if (grid[x][y] != '1' || visited[x][y]) return;
  visited[x][y] = true;
  floodFill(grid, visited, x - 1, y);
  floodFill(grid, visited, x + 1, y);
  floodFill(grid, visited, x, y - 1);
  floodFill(grid, visited, x, y + 1);
}

int numIslands(vector<vector<char>> &grid) {
  if (grid.empty() || grid[0].empty()) return 0;
  int res = 0;
  int m = grid.size(), n = grid[0].size();
  vector<vector<bool>> visited(m, vector<bool>(n, false));

  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (grid[i][j] == '1' && !visited[i][j]) {
        ++res;
        floodFill(grid, visited, i, j);
      }
    }
  }
  return res;
}

int main() {}
