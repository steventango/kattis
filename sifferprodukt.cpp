#include <iostream>

int main() {
  int x, p;
  std::cin >> x;
  do {
    p = 1;
    do {
      int d = x % 10;
      if (d) p *= d;
      x /= 10;
    } while (x > 0);
    x = p;
  } while (p > 9);
  std::cout << p << std::endl;
}
