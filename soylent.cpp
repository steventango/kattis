#include <iostream>
#include <cmath>

int main() {
  int T;
  std::cin >> T;
  while (T--) {
    int N, B;
    std::cin >> N;
    B = std::ceil(N / 400.0);
    std::cout << B << std::endl;
  }
}
