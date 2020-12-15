#include <iostream>

int main() {
  int l, r;
  std::cin >> l >> r;

  if (l == r) {
    if (l > 0) {
      std::cout << "Even " << 2 * l << std::endl;
    } else {
      std::cout << "Not a moose" << std::endl;
    }
  } else {
    int max = l > r ? l : r;
    std::cout << "Odd " << 2 * max << std::endl;
  }
}
