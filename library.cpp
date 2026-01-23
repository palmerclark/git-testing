#include <iostream>

namespace external {
void print(std::string_view content) {
  std::cout << "LIBRARY\n";
  std::cout << "=======\n";
  std::cout
      << "There was an issue with me :( The issue branch fixed me though!\n";
  std::cout << content;
}

int add(int a, int b) { return a + b; }
} // namespace external
