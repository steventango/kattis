#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int r, e, c;
  while (n > 0) {
    std::cin >> r >> e >> c;
    int a = e - c;
    if (a == r) {
      std::cout << "does not matter";
    } else {
      std::cout << (a < r ? "do not " : "") << "advertise";
    }
    std::cout << std::endl;
    n--;
  }
}
