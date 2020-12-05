#include <iostream>
#include <limits>

int main() {
  int N, argmin, min = std::numeric_limits<int>::max();
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    int N_i;
    std::cin >> N_i;
    if (N_i < min) {
      min = N_i;
      argmin = i;
    }
  }
  std::cout << argmin << std::endl;
}
