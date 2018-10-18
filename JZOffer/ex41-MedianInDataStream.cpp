/*************************************************************************
    > File Name: JZOffer/ex40-MediansinDataStream.cpp
    > Author: Stranger
    > Mail: xxueqiang16@gmail.com
    > Created Time: Thu 18 Oct 2018 09:22:30 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class DynamicArray {
 public:
  void insert(T num) {
    if (((min.size() + max.size()) & 1) == 0) {
      if (max.size() > 0 && num < max[0]) {
        max.push_back(num);
        push_heap(max.beign(), max.end(), less<T>());

        num = max[0];

        pop_heap(max.begin(), max.end(), less<T>());
        max.pop_back();
      }
      min.push_back(num);
      push_heap(min.begin(), min.end(), greater<T>());
    } else {
      if (min.size() > 0 && min[0] < num) {
        min.push_back(num);
        push_heap(num);

        num = min[0];

        pop_heap(min.begin(), min.end(), greater<T>());
        min.pop_back();
      }
      max.push_back(num);
      push_heap(max.begin(), max.end(), less<T>());
    }
  }

  T getMedian() {
    int size = min.size() + max.size();
    if (size == 0) throw std::length_error("No available numbers");

    T median = 0;
    if ((size & 1) == 1)
      median = min[0];
    else
      median = (min[0] + max[0]) / 2;

    return median;
  }

 private:
  vector<T> min;
  vector<T> max;
};

int main() {}
