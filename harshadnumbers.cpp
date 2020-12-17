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
  int n;
  std::cin >> n;

  while (n % sumd(n)) n++;
  std::cout << n;
}
