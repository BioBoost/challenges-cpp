#include <iostream>

using namespace std;

void order(int * a, int * b) {
  // Needs implementation
}

int main() {
  int valueA = 12;
  int valueB = 8;

  order(&valueA, &valueB);
  cout << valueA << " is the smallest while "
    << valueB << " is the largest" << endl;

  int valueC = 44;
  int valueD = 88;

  order(&valueC, &valueD);
  cout << valueC << " is the smallest while "
    << valueD << " is the largest" << endl;

  return 0;
}