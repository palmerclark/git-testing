#include "library.h"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  std::cout << "Hi! I'm the experimental branch :)\n";
  external::print("Is my library working?\n");

  return 0;
}
