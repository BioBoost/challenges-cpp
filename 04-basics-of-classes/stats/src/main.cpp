#include <iostream>
#include "../lib/serie.h"

using namespace std;

int main() {

  Serie series;
  series.add(600);
  series.add(470);
  series.add(170);
  series.add(430);
  series.add(300);

  cout << "Serie: " << series.to_string() << endl;
  cout << "\t=> Count: " << series.count() << endl;
  cout << "\t=> Sum: " << series.sum() << endl;
  cout << "\t=> Average: " << series.average() << endl;
  cout << "\t=> Minimum: " << series.minimum() << endl;
  cout << "\t=> Maximum: " << series.maximum() << endl;
  cout << "\t=> Variance: " << series.variance() << endl;
  cout << "\t=> Standard Deviation: " << series.standard_deviation() << endl;

  return 0;
}