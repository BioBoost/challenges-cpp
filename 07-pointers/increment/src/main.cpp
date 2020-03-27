#include <iostream>

using namespace std;

void increment(int value) {
  value++;
}

int main() {
  int counter = 0;
  while(counter < 10) {
    increment(counter);
    cout << counter << " ";
  }
  cout << endl;

  return 0;
}