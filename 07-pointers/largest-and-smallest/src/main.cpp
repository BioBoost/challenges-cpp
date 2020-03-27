#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void find_range(int * array, unsigned int size,
  int * minimum, int * maximum) {

  for (unsigned int i = 0; i < size; i++) {
    if (i == 0) {
      *minimum = *maximum = array[i];
    }
    if (*minimum > array[i]) {
      *minimum = array[i];
    }
    if (array[i] > *maximum) {
      *maximum = array[i];
    }
  }
}

int main() {
  // The array
  int values[] = {4, 32, 3, -23, 0, 11, 34, 2};
  int minimum;
  int maximum;
  find_range(values, sizeof(values)/sizeof(int), &minimum, &maximum);

  cout << "The minimum is " << minimum << endl;
  cout << "The maximum is " << maximum << endl;

  return 0;
}