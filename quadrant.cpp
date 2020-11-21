#include <iostream>

int main() {
  int x, y, Q;
  std::cin >> x >> y;
  if (x > 0) {
    Q = y > 0 ? 1 : 4;
  } else {
    Q = y > 0 ? 2 : 3;
  }
  std::cout << Q << std::endl;
}
