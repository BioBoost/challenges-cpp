#pragma once

#include <string>

class Human {

  public:
    Human(void);
    Human(std::string name);

  private:
    std::string name;
};