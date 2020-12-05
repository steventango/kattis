#include <iostream>

int main() {
  std::string names;
  std::string short_variation;
  std::cin >> names;

  for (char c : names) {
    if (c > 64 && c < 91) {
      short_variation += c;
    }
  }
  std::cout << short_variation << std::endl;
}
