#include <iostream>

int main() {
  double X;
  std::cin >> X;
  int R = X * 1000 * 5280 / 4854 + 0.5;
  std::cout << R << std::endl;
}
  