#include <cmath>
#include <iostream>
#include <unordered_map>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::unordered_map<int, int> locations;
  int N, Q;
  std::cin >> N >> Q;
  for (int i = 1; i <= N; i++) {
    int X;
    std::cin >> X;
    locations[i] = X;
  }
  for (int i = 0; i < Q; i++) {
    int T;
    std::cin >> T;
    if (T == 1) {
      int C, X;
      std::cin >> C >> X;
      locations[C] = X;
    } else if (T == 2) {
      int A, B;
      std::cin >> A >> B;
      std::cout << abs(locations[B] - locations[A]) << std::endl;
    }
  }
}
