/*************************************************************************
    > File Name: LeetCode/lc829-ConsecutiveNumbersSum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 09:39:19 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

// 等差数列求和
// a, a+(a+1),a+(a+1)(a+2),...
// N = i * a + i(i-1)/2  i = 1,2,3,...
int consecutiveNumbersSum(int N) {
  int count = 0;
  for (int i = 1; i <= N; ++i) {
    int s = i * (i - 1) / 2;
    int an = N - s;
    if(an < i) break;
    count += (an % i == 0);
  }
  return count;
}

int main() {
  int result = consecutiveNumbersSum(15);
  cout << result << endl;
}
