#include <iostream>

int main() {
  int N, a, b, c;
  std::cin >> N;
  while (N--) {
    std::cin >> a >> b >> c;
    if (a + b == c || a - b == c || b - a == c || a * b == c ||
        a / b == c && a % b == 0 || b / a == c && b % a == 0) {
      std::cout << "Possible" << std::endl;
    } else {
      std::cout << "Impossible" << std::endl;
    }
  }
}
