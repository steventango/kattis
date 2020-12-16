#include <iostream>

int main() {
  int A, B, C;
  std::cin >> A >> B >> C;
  if (A + B == C) {
    std::cout << A << '+' << B << '=' << C << std::endl;
  } else if (A - B == C) {
    std::cout << A << '-' << B << '=' << C << std::endl;
  } else if (A * B == C) {
    std::cout << A << '*' << B << '=' << C << std::endl;
  } else if (A / B == C) {
    std::cout << A << '/' << B << '=' << C << std::endl;
  } else if (A == B + C) {
    std::cout << A << '=' << B << '+' << C << std::endl;
  } else if (A == B - C) {
    std::cout << A << '=' << B << '-' << C << std::endl;
  } else if (A == B * C) {
    std::cout << A << '=' << B << '*' << C << std::endl;
  } else if (A == B / C) {
    std::cout << A << '=' << B << '/' << C << std::endl;
  }
}
