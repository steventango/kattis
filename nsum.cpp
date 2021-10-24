#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int N;
  std::cin >> N;

  int sum = 0;
  for (int i = 0; i < N; i++) {
    int a;
    std::cin >> a;
    sum += a;
  }

  std::cout << sum << std::endl;
}
