/*************************************************************************
    > File Name: JZOffer/ex17-Print1toMaxOfNDigits.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 05 Jul 2018 09:12:15 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

void PrintNumber(const string& number) {
  bool is_zero = true;
  unsigned long i;
  for (i = 0; i < number.size(); i++) {
    if (number[i] != '0') is_zero = false;
    if (!is_zero) break;
  }
  if (i != number.size()) {
    cout << number.substr(i);
    cout << " ";
  }
}

void GenerateNumbers(string num, int n, int index) {
  if (index == num.size()-1) {
    PrintNumber(num);
    return;
  }
  for (int i = 0; i < 10; i++) {
    num[index+1] = i + '0';
    GenerateNumbers(num, n, index+1);
  }
}

void Print1ToMaxOfNDigits(int n) {
  if (n <= 0) {
    cout << "n must greater than 0!" << endl;
    return;
  }

  string number(n, '0');
  for(int i=0; i<10; ++i) {
    number[0] = i + '0';
    GenerateNumbers(number, n, 0);
  }
}

int main() {
  Print1ToMaxOfNDigits(3);
  cout << endl;
}
