#include <iostream>

namespace external {
void print(std::string_view content) {
  std::cout << "Hello! I'm printing your content from a library.\n";
  std::cout << content;
}
} // namespace external
