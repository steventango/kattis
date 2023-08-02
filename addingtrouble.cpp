#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  
  int A, B, C;
  std::cin >> A >> B >> C;
  std::cout << (A + B == C ? "correct!" : "wrong!") << std::endl;
}
