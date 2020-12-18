#include <cmath>
#include <iostream>

int main() {
  int P, K, n, b;
  std::cin >> P;
  while (P-- && std::cin >> K >> b >> n) {
    int SSD = 0;
    while (n) {
      SSD += std::pow(n % b, 2);
      n /= b;
    }
    std::cout << K << " " << SSD << std::endl;
  }
}
