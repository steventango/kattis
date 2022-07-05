#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int G, T, N;
  std::cin >> G >> T >> N;

  int W = 0, w;
  for (int i = 0; i < N; ++i) {
    std::cin >> w;
    W += w;
  }

  std::cout << 0.9 * (G - T) - W << std::endl;
}