#include <cmath>
#include <iostream>

int main() {
  int N, X = 0;
  std::cin >> N;
  while (N--) {
    int P;
    std::cin >> P;
    X += std::pow(P / 10, P % 10);
  }
  std::cout << X;
}
