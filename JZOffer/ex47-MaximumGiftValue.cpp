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
  if(values.empty() || values[0].empty()) return 0;

  int rows = values.size();
  int cols = values[0].size();
  vector<vector<int>> maxValue(rows, vector<int>(cols));

  maxValue[0][0] = values[0][0];
  for (int i = 1; i < rows; ++i)
    maxValue[i][0] = values[i][0] + maxValue[i - 1][0];

  for (int i = 0; i < rows; ++i) {
    for (int j = 1; j < cols; ++j) {
      if (i == 0) maxValue[0][j] = values[0][j] + values[0][j-1];
      else maxValue[i][j] = max(maxValue[i-1][j], maxValue[i][j-1]) + values[i][j];
    }
  }

  return maxValue[rows-1][cols-1];
}

int main() {
  vector<vector<int>> gifts{
    {1,10,3,8},
    {12,2,9,6},
    {5,7,4,11},
    {3,7,16,5}};

  int result = getMaxValue(gifts);
  cout << "Max value is: " << result << endl;
}
