#include <iostream>

int main() {
  int W, N, S = 0;
  std::cin >> W >> N;
  while (N--) {
    int w, l;
    std::cin >> w >> l;
    S += w * l;
  }
  std::cout << S / W;
}
