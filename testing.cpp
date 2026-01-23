#include "library.h"
#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  std::cout << "Hi! I was merged from the experimental branch :)\n";
  external::print(
      "I'm being printed by your library - linked using CMake. Cool!\n");

  return 0;
}
