#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  float x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;

  std::cout << std::abs((x2 - x1) * (y2 - y1)) << std::endl;
}