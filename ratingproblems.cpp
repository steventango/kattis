#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n, k;
  double sum = 0;

  std::cin >> n >> k;
  for (int i = 0; i < k; ++i) {
    int r;
    std::cin >> r;
    sum += r;
  }

  double lower = (sum - (n - k) * 3) / n;
  double upper = (sum + (n - k) * 3) / n;

  std::cout << lower << " " << upper << std::endl;
}
