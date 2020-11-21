#include <iostream>
#include <sstream>
#include <string>

int main() {
  int n, h, v;
  std::string str;
  std::getline(std::cin, str);
  std::istringstream stream(str);
  stream >> n >> h >> v;
  std::cout << std::max(h, n - h) * std::max(v, n - v) * 4;
}
