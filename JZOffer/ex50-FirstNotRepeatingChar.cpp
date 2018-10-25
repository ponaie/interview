/*************************************************************************
    > File Name: JZOffer/ex50-FirstNotRepeatingChar.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 04:18:05 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

char FirstNotRepeatingChar(char *pString) {
  if(pString==nullptr) return '\0';

  const int tableSize = 256;
  unsigned int hashTable[tableSize];
  for(unsigned int i=0; i<tableSize; ++i) hashTable[i] = 0;

  char *pHashKey = pString;
  while(*pHashKey!='\0') hashTable[*(pHashKey++)]++;

  pHashKey = pString;
  while(*pHashKey!='\0') {
    if(hashTable[*pHashKey]==1) return *pHashKey;
    pHashKey++;
  }

  return '\0';
}

int main() {
  char chs[] = "abaccdeff";
  char result = FirstNotRepeatingChar(chs);
  cout << result << endl;
}
