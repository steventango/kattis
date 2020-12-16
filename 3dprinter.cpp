#include <cmath>
#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::cout << std::ceil(std::log2(n)) + 1 << std::endl;
}
