/*************************************************************************
    > File Name: LeetCode/lc447-NumberofBoomerangs.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 27 Nov 2018 06:16:28 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int numberOfBoomerangs(vector<pair<int, int>>& points) {
  int res = 0;
  for (int i = 0; i < points.size(); ++i) {
    unordered_map<int, int> m;
    for (int j = 0; j < points.size(); ++j) {
      int a = points[i].first - points[j].first;
      int b = points[i].second - points[j].second;
      ++m[a * a + b * b];
    }
    for (auto it = m.begin(); it != m.end(); ++it) {
      res += it->second * (it->second - 1);
    }
  }
  return res;
}

int main() {}
