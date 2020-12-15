#include <cctype>
#include <iostream>

int main() {
  int P, T, solve = 0;

  std::cin >> P >> T;

  while (P--) {
    bool broke = false;

    for (int i = 0; i < T; i++) {
      std::string test;
      std::cin >> test;
      if (!broke) {
        for (char c : test.substr(1)) {
          if (std::isupper(c)) {
            broke = true;
            break;
          }
        }
      }
    }
    if (!broke) solve++;
  }

  std::cout << solve << std::endl;
}
