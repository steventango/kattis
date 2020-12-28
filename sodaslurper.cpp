#include <iostream>

int main() {
  int e, f, g, sodas = 0;
  std::cin >> e >> f >> g;
  e += f;

  while (e >= g) {
    int temp = e;
    e /= g;
    sodas += e;
    e += temp % g;
  }
  std::cout << sodas << std::endl;
}
