#include <iostream>

#ifndef library
#define library

namespace external {
void print(std::string_view content);
int add(int a, int b);
} // namespace external

#endif
