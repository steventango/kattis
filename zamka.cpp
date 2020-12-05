#include <iostream>

int main() {
  int L, D, X;
  std::cin >> L >> D >> X;
  for (int N = L; N <= D; N++) {
    int sum = 0, number = N;
    while (number > 0) {
      sum += number % 10;
      number /= 10;
    }
    if (sum == X) {
      std::cout << N << std::endl;
      break;
    }
  }
  for (int M = D; M >= L; M--) {
    int sum = 0, number = M;
    while (number > 0) {
      sum += number % 10;
      number /= 10;
    }
    if (sum == X) {
      std::cout << M << std::endl;
      break;
    }
  }
}
