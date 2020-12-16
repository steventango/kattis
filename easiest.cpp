#include <iostream>

int sumd(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, p;
  while (std::cin >> N && N != 0) {
    p = 11;

    while (sumd(N * p) != sumd(N)) p++;

    std::cout << p << std::endl;
  }
}
