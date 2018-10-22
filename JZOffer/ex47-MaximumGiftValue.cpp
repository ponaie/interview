/*************************************************************************
    > File Name: JZOffer/ex47-MaximumGiftValues.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 22 Oct 2018 10:32:41 AM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int getMaxValue(const vector<vector<int>> values) {
  if (values.empty() || values[0].empty()) return 0;

  int rows = values.size();
  int cols = values[0].size();
  vector<vector<int>> maxValues(rows, vector<int>(cols));

  maxValues[0][0] = values[0][0];
  for (int i = 1; i < rows; ++i)
    maxValues[i][0] = values[i][0] + maxValues[i - 1][0];

  for (int i = 0; i < rows; ++i) {
    for (int j = 1; j < cols; ++j) {
      if (i == 0)
        maxValues[0][j] = values[0][j] + values[0][j - 1];
      else
        maxValues[i][j] =
            max(maxValues[i - 1][j], maxValues[i][j - 1]) + values[i][j];
    }
  }

  return maxValues[rows - 1][cols - 1];
}

int getMaxValue2(const vector<vector<int>> values) {
  if (values.empty() || values[0].empty()) return 0;

  int rows = values.size();
  int cols = values[0].size();
  vector<vector<int>> maxValue(rows, vector<int>(cols));

  vector<int> maxValues(cols);

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      int left = 0;
      int up = 0;

      if (i > 0) up = maxValues[j];
      if (j > 0) left = maxValues[j - 1];

      maxValues[j] = max(left, up) + values[i][j];
    }
  }

  return maxValues[cols - 1];
}

int main() {
  vector<vector<int>> gifts{
      {1, 10, 3, 8}, {12, 2, 9, 6}, {5, 7, 4, 11}, {3, 7, 16, 5}};

  int result = getMaxValue2(gifts);
  cout << "Max value is: " << result << endl;
}
