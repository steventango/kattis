#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N, expenses = 0;

  std::cin >> N;

  for (int i = 0; i < N; ++i) {
    int k;
    std::cin >> k;
    if (k < 0) {
      expenses -= k;
    }
  }

  std::cout << expenses << std::endl;
}
