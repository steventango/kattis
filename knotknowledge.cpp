#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int n;
  int sum = 0;

  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    sum += x;
  }
  for (int i = 0; i < n - 1; i++) {
    int y;
    std::cin >> y;
    sum -= y;
  }

  std::cout << sum << std::endl;
}
