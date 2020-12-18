#include <cmath>
#include <iostream>

int fibonacci(int n) {
  return std::round(1 / std::sqrt(5) * std::pow((1 + sqrt(5)) / 2, n + 1));
}

int main() {
  int K, A, B;
  std::cin >> K;
  std::cout << fibonacci(K - 2) << " " << fibonacci(K - 1) << std::endl;
}
