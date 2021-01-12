#include <cmath>
#include <iostream>

double newtons_method(double guess, double epsilon) {
  // https://www.desmos.com/calculator/iju5b4kq3v
  double root = guess, prev = 0;

  while (std::abs(root - prev) > epsilon) {
    prev = root;
    root = prev - std::tan(6.0 / 13 * M_PI * (prev - 2018.25)) * 13 / 6.0 /
                      M_PI *
                      std::pow(std::cos(6.0 / 13 * M_PI * (prev - 2018.25)), 2);
  }
  return root;
}

int main() {
  int y;
  std::cin >> y;

  double root = newtons_method(y + .49, 0.001);
  bool found = y <= root && root < y + 1 && (y - 2018.25) != 13 / 12.0;

  std::cout << (found ? "yes" : "no") << std::endl;
}
