#include <cstdlib>
#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << std::min(a, b) << " " << std::max(a, b) << std::endl;
}
