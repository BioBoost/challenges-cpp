#include "serie.h"
#include <sstream>
#include <cmath>

void Serie::add(int value) {
  numbers.push_back(value);
}

double Serie::average(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

double Serie::sum(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

int Serie::count(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

int Serie::minimum(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

int Serie::maximum(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

double Serie::variance(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

double Serie::standard_deviation(void) {
  // NEEDS IMPLEMENTATION
  return -1;
}

std::string Serie::to_string(void) {
  std::stringstream ss;
  for (auto & value : numbers) {
    ss << value << " ";
  }
  return ss.str();
}