#include <iostream>
#include <sstream>
#include <string>

int main() {
  const char c_arr[] = {'a', 'b', 'c', '\0', 'd', 'e', 'f', '\0'};
  std::cout << "1. " << c_arr << std::endl;
  std::string cpp_str(c_arr);
  std::cout << "2. " << cpp_str << std::endl;
  std::stringstream leftover;
  leftover.write(c_arr, 8);
  auto str = leftover.str();
  std::cout << "3. " << str << std::endl;
  std::cout << "str size: " << str.size() << std::endl;
  for (auto i : str) {
    std::cout << static_cast<int>(i) << " ";
  }
  std::cout << std::endl;
  auto data = str.c_str();
  for (auto i = 0; i < 8; ++i) {
    std::cout << static_cast<int>(data[i]) << " ";
  }
  std::cout << std::endl;
  return 0;
}
