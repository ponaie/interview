/*************************************************************************
    > File Name: JZOffer/ex64-Sum.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Tue 06 Nov 2018 11:28:51 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Tmp {
 public:
  Tmp() {
    ++N;
    Sum += N;
  }

  static void Reset() {
    N = 0;
    Sum = 0;
  }
  static unsigned int GetSum() { return Sum; }

 private:
  static unsigned int N;
  static unsigned int Sum;
};

unsigned int Tmp::N = 0;
unsigned int Tmp::Sum = 0;

int main() {
  Tmp::Reset();
  int n = 6;

  Tmp *a = new Tmp[n];
  delete[] a;
  a = nullptr;

  return Tmp::GetSum();
}
