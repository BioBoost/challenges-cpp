#include <iostream>
#include "lib/human.h"

int main() {
  cout << "I make therefore I am ..." << endl;
  
  Human human;
  Human mark("Mark");

  cout << human.to_string() << endl;
  cout << mark.to_string() << endl;

  return 0;
}