#include <iostream>

int main() {
  double R, C;
  std::cin >> R >> C;
  std::cout << std::fixed;
  std::cout.precision(6);
  std::cout << 100 * (R - C) * (R - C) / R / R;
}
