#include <iomanip>
#include <iostream>

int main() {
  double C, L, w, l, cost = 0;
  std::cin >> C >> L;
  while (L > 0) {
    std::cin >> w >> l;
    cost += C * w * l;
    L--;
  }
  std::cout << std::setprecision(8) << cost << std::endl;
}
