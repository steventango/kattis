#include <iostream>

int main() {
  int x = 0, y = 0;
  for (int i = 0, xi, yi; i < 3; i++) {
    std::cin >> xi >> yi;
    x ^= xi;
    y ^= yi;
  }
  std::cout << x << " " << y << std::endl;
}
