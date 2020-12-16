#include <iostream>

int main() {
  std::string rot = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

  int n;
  while (std::cin >> n && n != 0) {
    std::string message;
    std::cin >> message;

    for (auto i = message.crbegin(); i != message.crend(); i++) {
      std::cout << rot[(rot.find(*i) + n) % 28];
    }
    std::cout << std::endl;
  }
}
