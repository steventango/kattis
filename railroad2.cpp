#include <iostream>

int main() {
  int X, Y;
  std::cin >> X >> Y;
  std::cout << (Y % 2 ? "impossible" : "possible") << std::endl;
}
