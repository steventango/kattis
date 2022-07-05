#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  std::cin >> a;

  std::cout << 100. / a << std::endl;
  std::cout << 100. / (100 - a)  << std::endl;
}