#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout << std::setprecision(16);

  int a, b, c, d;
  std::cin >> a >> b >> c >> d;

  double s = 0.5 * (a + b + c + d);

  // Brahmagupta's formula
  double A = sqrt((s - a) * (s - b) * (s - c) * (s - d));
  std::cout << A << std::endl;
}
