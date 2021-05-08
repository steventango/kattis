#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);

  int wc, hc, ws, hs;

  std::cin >> wc >> hc >> ws >> hs;
  std::cout << (wc >= ws + 2 && hc >= hs + 2) << std::endl;
}
