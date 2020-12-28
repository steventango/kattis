#include <iostream>

int main() {
  int n, T, i, sum = 0;

  std::cin >> n >> T;

  for (i = 0; i < n; i++) {
    int length;
    std::cin >> length;
    sum += length;
    if (sum > T) break;
  }

  std::cout << i << std::endl;
}
