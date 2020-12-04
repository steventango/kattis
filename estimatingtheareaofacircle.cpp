#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  double r, m, c;
  while (true) {
    std::cin >> r >> m >> c;
    if (r + m + c == 0) break;
    std::cout << std::setprecision(10) << M_PI * r * r << " "
              << 4 * r * r * c / m << std::endl;
  }
}
