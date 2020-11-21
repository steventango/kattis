#include <cmath>
#include <iostream>

int main() {
  int N;
  std::cin >> N;
  std::cout << (int) std::pow(std::pow(2, N) + 1, 2) << std::endl;
}
