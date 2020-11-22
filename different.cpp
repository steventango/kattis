#include <iostream>

int main() {
  int64_t X, Y;
  while (std::cin >> X >> Y) {
    std::cout << (Y > X ? Y - X : X - Y) << std::endl;
  }
}
