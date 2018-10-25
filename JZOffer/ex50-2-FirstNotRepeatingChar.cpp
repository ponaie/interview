/*************************************************************************
    > File Name: JZOffer/ex50-2-FirstNotRepeatingChar.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 25 Oct 2018 04:36:39 PM CST
 ************************************************************************/

#include <iostream>
#include <limits>
using namespace std;

class CharStatistics {
 public:
  CharStatistics() : index(0) {
    for (int i = 0; i < 256; ++i) occurrence[i] = -1;
  }

  void Insert(char ch) {
    if (occurrence[ch] == -1)
      occurrence[ch] = index;
    else if (occurrence[ch] >= 0)
      occurrence[ch] = -2;

    index++;
  }

  char FirstAppearingOnce() {
    char ch = '\0';
    int minIndex = std::numeric_limits<int>::max();
    for (int i = 0; i < 256; ++i) {
      if (occurrence[i] >= 0 && occurrence[i] < minIndex) {
        ch = (char)i;
        minIndex = occurrence[i];
      }
    }
    return ch;
  }

 private:
  // occurrence[i]: A character with ASCII value i;
  // occurrence[i] = -1: The character has not found;
  // occurrence[i] = -2: The character has been found for mutlple times
  // occurrence[i] >= 0: The character has been found only once
  int occurrence[256];
  int index;
};

int main() {}
