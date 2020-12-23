#include <iostream>

int main() {
  int n, score = 0;
  std::cin >> n;

  char c, last;
  while (n--) {
    std::cin >> c;
    if (last == c) score++;
    last = c;
  }

  std::cout << score << std::endl;
}
