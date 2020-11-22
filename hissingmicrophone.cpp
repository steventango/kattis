#include <iostream>
#include <string>

int main() {
  std::string string;
  std::cin >> string;
  std::cout << (string.find("ss") == std::string::npos ? "no " : "") << "hiss"
            << std::endl;
}
