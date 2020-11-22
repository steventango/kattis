#include <iostream>

int main() {
  int T, N;
  int lfd[] = {1, 1, 2, 6, 4};
  std::cin >> T;
  while (T > 0) {
    std::cin >> N;
    if (N > 4) {
      std::cout << 0 << std::endl;
    } else {
      std::cout << lfd[N] << std::endl;
    }
    T--;
  }
}
