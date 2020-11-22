#include <iostream>

int main() {
  int N, M, min, max;
  std::cin >> N >> M;
  N += 1;
  M += 1;
  min = N < M ? N : M;
  max = M > N ? M : N;
  for (int i = min; i < max + 1; i++) {
    std::cout << i << std::endl;
  }
}
