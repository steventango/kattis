#include <iostream>

int main() {
  int L, x, p = 0, rejected = 0;
  std::cin >> L >> x;
  while (x--) {
    std::string e;
    int px;
    std::cin >> e >> px;
    if (e == "enter") {
      if (p + px <= L) {
        p += px;
      } else {
        rejected++;
      }
    } else {
      p -= px;
    }
  }
  std::cout << rejected << std::endl;
}
