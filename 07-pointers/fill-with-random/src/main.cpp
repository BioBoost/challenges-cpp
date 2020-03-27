#include <iostream>

using namespace std;

void fill_with_random(int * array, unsigned int size) {
  // Needs implementation
}

int main() {
  // The array
  int values[10];
  fill_with_random(values, 10);

  for (auto const& value : values) {
    cout << value << " ";
  }
  cout << endl;

  return 0;
}