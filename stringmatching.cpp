#include <iostream>
#include <string>

int main() {
  std::string pattern, text;
  std::ios_base::sync_with_stdio(false);

  while (std::getline(std::cin, pattern)) {
    std::getline(std::cin, text);
    std::size_t found = -1;

    while (true) {
      found = text.find(pattern, found + 1);
      if (found != std::string::npos) {
        std::cout << found << " ";
      } else {
        break;
      }
    }
    std::cout << std::endl;
    // Knuth–Morris–Pratt algorithm is faster.
  }
}
