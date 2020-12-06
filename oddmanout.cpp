#include <iostream>

int main() {
  int N;
  std::cin >> N;
  for (int i = 1; i <= N; i++) {
    int G, C_alone = 0;
    std::cin >> G;
    while (G--) {
      int C;
      std::cin >> C;
      C_alone ^= C;
    }
    std::cout << "Case #" << i << ": " << C_alone << std::endl;
  }
}
