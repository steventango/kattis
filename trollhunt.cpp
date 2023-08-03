#include <cmath>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int b, k, g;
  std::cin >> b >> k >> g;
  std::cout << ceil((b - 1.) / (k / g)) << std::endl;
}
