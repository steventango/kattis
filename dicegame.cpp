#include <iostream>

int main() {
  float g[4], e[4];
  float E_g, E_e;

  std::cin >> g[0] >> g[1] >> g[2] >> g[3];
  std::cin >> e[0] >> e[1] >> e[2] >> e[3];

  E_g = (g[1] - g[0] + 1) * (g[0] + g[1]) / 2 / (g[1] - g[0] + 1) +
        (g[3] - g[2] + 1) * (g[2] + g[3]) / 2 / (g[3] - g[2] + 1);
  E_e = (e[1] - e[0] + 1) * (e[0] + e[1]) / 2 / (e[1] - e[0] + 1) +
        (e[3] - e[2] + 1) * (e[2] + e[3]) / 2 / (e[3] - e[2] + 1);

  if (E_g > E_e) {
    std::cout << "Gunnar" << std::endl;
  } else if (E_g < E_e) {
    std::cout << "Emma" << std::endl;
  } else {
    std::cout << "Tie" << std::endl;
  }
}
