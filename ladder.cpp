#include <cmath>
#include <iostream>

int main() {
  double h, v, l;
  std::cin >> h >> v;
  l = h / sin(M_PI * v / 180);
  std::cout << std::ceil(l) << std::endl;
}
