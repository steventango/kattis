#include <iostream>
#include <limits>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    int x_max = std::numeric_limits<int>::min();
    int x_min = std::numeric_limits<int>::max();
    std::cin >> n;
    while (n--) {
      int x;
      std::cin >> x;
      if (x > x_max) x_max = x;
      if (x < x_min) x_min = x;
    }
    std::cout << 2 * (x_max - x_min) << std::endl;
  }
}
