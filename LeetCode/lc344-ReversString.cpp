/*************************************************************************
    > File Name: LeetCode/lc344-ReversString.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 11:30:03 AM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
  string result(s.rbegin(), s.rend());
  return result;
}

int main() {}
