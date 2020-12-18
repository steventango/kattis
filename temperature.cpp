#include <iostream>

int main() {
  int X, Y;
  std::cin >> X >> Y;
  if (Y == 1 && X == 0) {
    std::cout << "ALL GOOD" << std::endl;
  } else if (Y == 1) {
    std::cout << "IMPOSSIBLE" << std::endl;
  } else {
    std::cout.precision(9);
    std::cout << X / (1.0 - Y) << std::endl;
  }
}
