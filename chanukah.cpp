#include <iostream>

int main() {
  int N;
  std::cin >> N;
  while (N--) {
    int K, P;
    std::cin >> K >> P;
    std::cout << K << " " << ((P + 2) * (P + 1)) / 2 - 1 << std::endl;
  }
}
