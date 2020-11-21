#include <iostream>

int main() {
  int n;
  std::cin >> n;
  while (n > 0) {
    int x;
    std::cin >> x;
    std::cout << x << " is " << (x % 2 ? "odd" : "even") << std::endl;
    n--;
  }
}
