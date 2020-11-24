#include <iostream>

int main() {
  int a, b, c, d, det, t, i = 1;
  while (std::cin >> a && std::cin >> b && std::cin >> c && std::cin >> d) {
    det = a * d - b * c;
    std::cout << "Case " << i << ":" << std::endl;
    std::cout << d / det << " " << -b / det << std::endl;
    std::cout << -c / det << " " << a / det << std::endl;
    i++;
  }
}
