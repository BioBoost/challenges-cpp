#pragma once

#include <vector>
#include <string>

class Serie {
  
  public:
    void add(int value);

  public:
    double average(void);
    double sum(void);
    int count(void);
    int minimum(void);
    int maximum(void);
    double variance(void);
    double standard_deviation(void);

  public:
    std::string to_string(void);

  private:
    std::vector<int> numbers;
};