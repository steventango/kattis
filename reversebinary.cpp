#include <iostream>

int main() {
  int N, R = 0;
  std::cin >> N;
  while (N > 0) {
    R <<= 1;
    if (N & 1) R ^= 1;
    N >>= 1;
  }
  std::cout << R << std::endl;
}
