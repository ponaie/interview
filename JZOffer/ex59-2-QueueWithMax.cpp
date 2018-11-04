/*************************************************************************
    > File Name: JZOffer/ex59-QueueWithMax.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Sun 04 Nov 2018 09:58:29 PM CST
 ************************************************************************/

#include <deque>
#include <exception>
#include <iostream>
using namespace std;

template<typename T>
class QueueWithMax {
  public:
    QueueWithMax(): currentIndex(0) {}

    void push_back(T number) {
      while(!maximums.empty() && number >= maximums.back().number)
        maximums.pop_back();

      InternalData internalData = {number, currentIndex};
      data.push_back(internalData);
      maximums.push_back(internalData);

      ++currentIndex;
    }

    void pop_front() {
      if(maximums.empty()) throw new range_error("queue is empty");

      if(maximums.front().index == data.front().index)
        maximums.pop_front();

      data.pop_front();
    }

    T max() const {
      if(maximums.empty()) throw new range_error("queue is emtpy");

      return maximums.front().number;
    }

  private:
    struct InternalData {
      T number;
      int index;
    };

    deque<InternalData> data;
    deque<InternalData> maximums;
    int currentIndex;
};

int main() {}
