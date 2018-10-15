/*************************************************************************
    > File Name: JZOffer/ex38-StringPermutation.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Mon 15 Oct 2018 11:20:18 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void Permutation(char* pStr, char* pBegin) {
  if(*pBegin == '\0') { printf("%s\n", pStr); }
  else {
    for(char* pCh = pBegin; *pCh != '\0'; ++pCh) {
      char tmp = *pCh;
      *pCh = *pBegin;
      *pBegin = tmp;

      Permutation(pStr, pBegin + 1);

      tmp = *pCh;
      *pCh = *pBegin;
      *pBegin = tmp;
    }
  }
}

void Permutation(char* pStr) {
  if(pStr == nullptr) return;

  Permutation(pStr, pStr);
}

int main() {}
