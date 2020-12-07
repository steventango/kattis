#include <cmath>
#include <iostream>

int main() {
  int N;
  std::cin >> N;
  while (N--) {
    float v0, theta, x1, h1, h2, g = 9.81, t, y1;
    std::cin >> v0 >> theta >> x1 >> h1 >> h2;
    theta *= M_PI / 180;
    t = x1 / v0 / std::cos(theta);
    y1 = v0 * t * std::sin(theta) - g * t * t / 2;
    std::cout << (y1 > h1 + 1 && y1 < h2 - 1 ? "Safe" : "Not Safe")
              << std::endl;
  }
}
