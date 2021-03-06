/*************************************************************************
    > File Name: LeetCode/lc149-MaxPointsOnALine.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 27 Nov 2018 09:13:05 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

int gcd(int a, int b) { return (b == 0) ? a : gcd(b, a % b); }

int maxPoints(vector<Point>& points) {
  int res = 0;
  for (int i = 0; i < points.size(); ++i) {
    map<pair<int, int>, int> m;
    int duplicate = 1;
    for (int j = i + 1; j < points.size(); ++j) {
      if (points[i].x == points[j].x && points[i].y == points[j].y) {
        ++duplicate;
        continue;
      }
      int dx = points[j].x - points[i].x;
      int dy = points[j].y - points[i].y;
      int d = gcd(dx, dy);
      ++m[{dx / d, dy / d}];
    }
    res = max(res, duplicate);
    for (auto it = m.begin(); it != m.end(); ++it) {
      res = max(res, it->second + duplicate);
    }
  }
  return res;
}

int main() {}
