#include <cmath>
#include <iostream>

int main() {
  int N;
  double W, H, D;
  std::cin >> N >> W >> H;
  D = std::hypot(W, H);
  while (N > 0) {
    double L;
    std::cin >> L;
    std::cout << (D >= L ? "DA" : "NE") << std::endl;
    N--;
  }
}
