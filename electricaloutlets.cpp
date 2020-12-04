#include <iostream>

int main() {
  int N;
  std::cin >> N;
  while (N--) {
    int K, O;
    std::cin >> K;
    O = 1 - K;
    while (K--) {
      int O_K;
      std::cin >> O_K;
      O += O_K;
    }
    std::cout << O << std::endl;
  }
}
