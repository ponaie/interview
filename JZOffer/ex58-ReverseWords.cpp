/*************************************************************************
    > File Name: JZOffer/ex58-ReverseWords.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Fri 02 Nov 2018 10:42:45 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void Reverse(char *pBegin, char *pEnd) {
  if(pBegin==nullptr || pEnd==nullptr) return;

  while(pBegin<pEnd) {
    char tmp = *pBegin;
    *pBegin = *pEnd;
    *pEnd = tmp;

    pBegin++, pEnd--;
  }
}

char *ReverseSentence(char *pData) {
  if(pData==nullptr) return nullptr;

  char *pBegin = pData;
  char *pEnd = pData;
  while((*pEnd)!='\0') ++pEnd;
  --pEnd;

  Reverse(pBegin, pEnd);

  pBegin = pEnd = pData;
  while((*pBegin)!='\0') {
    if(*pBegin == ' ') {
      pBegin++;
      pEnd++;
    } else if(*pEnd==' ' || *pEnd=='\0') {
      Reverse(pBegin, --pEnd);
      pBegin = ++pEnd;
    } else {
      pEnd++;
    }
  }
  return pData;
}

int main() {}
