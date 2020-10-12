#include <iostream>

using namespace std;

int make_sum(int values[], unsigned int length) {
  // Return sum of all values

}

int main(int argc, char * argv[]) {

  int first[] = {12, 544, 3, 2, 0, 12, -5, 34, 6, 0, 441, -120};
  cout << "Sum of first array values = " << make_sum(first, sizeof(first)/sizeof(int)) << endl;

  int second[] = {4, 54, 23, 33, 0, 11, -123};
  cout << "Sum of second array values = " << make_sum(second, sizeof(second)/sizeof(int)) << endl;

  return 0;
}