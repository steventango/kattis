#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int v[11] = {4, 3, 2, 7, 6, 5, 0, 4, 3, 2, 1};
  int sum = 0;

  for (int i = 0; i < 11; i++) {
    char c;
    std::cin >> c;
    c -= '0';
    sum += c * v[i];
  }

  std::cout << (sum % 11 == 0) << std::endl;
}
