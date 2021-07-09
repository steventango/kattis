#include <iostream>
#include <string>

int main() {
  bool no_blimps = true;
  for (int i = 1; i <= 5; ++i) {
    std::string code;
    std::cin >> code;
    if (code.find("FBI") != std::string::npos) {
      no_blimps = false;
      std::cout << i << " ";
    }
  }
  if (no_blimps) {
    std::cout << "HE GOT AWAY!";
  }
  std::cout << std::endl;
}
