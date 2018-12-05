/*************************************************************************
    > File Name: LeetCode/lc71-SimplifyPath.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Wed 05 Dec 2018 07:06:30 PM CST
 ************************************************************************/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string simplifyPath(string path) {
  istringstream in(path);
  vector<string> v;
  string res;

  for (string tmp; std::getline(in, tmp, '/');) {
    if (tmp == "" || tmp == ".") continue;
    if (tmp == ".." && !v.empty())
      v.pop_back();
    else if (tmp != "..")
      v.push_back(tmp);
  }
  for (string s : v) res += "/" + s;
  return res.empty() ? "/" : res;
}

int main() {}
