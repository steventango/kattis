#include <cmath>
#include <iostream>
#include <string>

int main() {
  int x;
  while (std::cin >> x && x) {
    std::string S, P, C;
    std::cin >> S >> P >> C;
    int n = S.size();
    int d = int(std::pow(n, 1.5) + x) % n
  }
}
