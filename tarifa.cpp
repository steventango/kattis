#include <iostream>

int main() {
  int X, N, P;
  std::cin >> X >> N;
  int MB = X;
  while (N > 0) {
    std::cin >> P;
    MB += X - P;
    N--;
  }
  std::cout << MB << std::endl;
}
