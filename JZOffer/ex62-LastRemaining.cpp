/*************************************************************************
    > File Name: JZOffer/ex62-LastRemaining.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 05 Nov 2018 05:44:45 PM CST
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>
using namespace std;

int LastRemaining(int n, int m) {
  if(n < 1 || m < 1) return -1;

  list<int> nums;
  for(int i = 0; i <= n; ++i) nums.push_back(i);

  list<int>::iterator current = nums.begin();
  while(nums.size()>1) {
    for(int i = 1; i < m; ++i) {
      ++current;
      if(current == nums.end()) current = nums.begin();
    }

    list<int>::iterator next = ++current;
    if(next == nums.end()) next = nums.begin();

    --current;
    nums.erase(current);
    current = next;
  }

  return *(current);
}

int main() {
  int result = LastRemaining(4, 3);
  cout << result << endl;
}
