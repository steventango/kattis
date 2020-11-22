#include <iostream>

int main() {
  while (true) {
    int n, d = 0, last = 0;
    std::cin >> n;
    if (n < 0) break;

    while (n > 0) {
      int s, t;
      std::cin >> s >> t;
      d += s * (t - last);
      last = t;
      n--;
    }
    std::cout << d << " miles" << std::endl;
  }
}
