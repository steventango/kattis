#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  double h, b;
  std::cin >> h >> b;
  std::cout << h * b / 2 << std::endl;
}
