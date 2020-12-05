#include <iostream>

int main() {
  bool cups[] = {true, false, false};
  std::string instructions;
  std::cin >> instructions;
  for (char instruction : instructions) {
    switch (instruction) {
      case 'A':
        std::swap(cups[0], cups[1]);
        break;
      case 'B':
        std::swap(cups[1], cups[2]);
        break;
      case 'C':
        std::swap(cups[2], cups[0]);
        break;
    }
  }
  for (int i = 0; i < sizeof(cups) / sizeof(cups[0]); i++) {
    if (cups[i]) {
      std::cout << i + 1 << std::endl;
      break;
    }
  }
}
