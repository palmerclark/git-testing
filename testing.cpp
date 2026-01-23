#include "library.h"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  std::cout << "Hi! I was merged from the experimental branch :)\n";
  external::print("Hello!\n");

  return 0;
}
