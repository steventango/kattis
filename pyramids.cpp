#include <cmath>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N;
  std::cin >> N;

  double inner = std::sqrt(729 * std::pow(N, 2) - 3) + 27 * N;
  double epsilon = 1e-6;

  int height = std::floor(
    (std::pow(inner, 2. / 3) + std::cbrt(3)) /
    (2 * std::pow(3, 2. / 3) * std::cbrt(inner)) + epsilon);

  std::cout << height << std::endl;
}