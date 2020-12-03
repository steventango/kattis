#include <iostream>

int main() {
  int n, d;
  while (std::cin >> n >> d) {
    if (d == 0) break;
    std::cout << n / d << " " << n % d << " / " << d << std::endl;
  }
}
