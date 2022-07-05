#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c;
  int bars = 0;
  bool eye = false;

  while (std::cin >> c) {
    switch (c) {
      case '|':
        if (eye) {
          --bars;
        } else {
          ++bars;
        }
        break;
      case ')':
        eye = true;
        break;
      default:
        break;
    }
  }

  std::cout << (bars ? "fix" : "correct") << std::endl;
}