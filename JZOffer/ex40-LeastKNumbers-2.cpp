/*************************************************************************
    > File Name: JZOffer/ex40-LeastKNumbers-2.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 18 Oct 2018 06:03:52 PM CST
 ************************************************************************/

#include <iostream>
#include <set>
#include <vector>
using namespace std;

void LeastKNumbers(const vector<int> &data, multiset<int, greater<int>> &nums,
                   int k) {
  if (k < 1 || k > data.size()) return;

  for (auto it = data.begin(); it != data.end(); ++it) {
    if (nums.size() < k)
      nums.insert(*it);
    else {
      auto iter = nums.begin();
      if (*it < *iter) {
        nums.erase(iter);
        nums.insert(*it);
      }
    }
  }
}

int main() {
  multiset<int, greater<int>> leastNums;
  vector<int> data{2, 9, 5, 8, 1, 4, 3, 6};

  LeastKNumbers(data, leastNums, 4);

  for (auto e : leastNums) cout << e << ' ';
  cout << endl;
}
