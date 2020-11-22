#include <iostream>

int flip(int n) {
  int reversed = 0;
  while (n != 0) {
    int remainder = n % 10;
    reversed *= 10;
    reversed += remainder;
    n /= 10;
  }
  return reversed;
}

int main() {
  int A, B;
  std::cin >> A >> B;
  A = flip(A);
  B = flip(B);
  std::cout << (A > B ? A : B) << std::endl;
}
