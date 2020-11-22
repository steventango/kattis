#include <iostream>

int main() {
  int index = -1, max = -1;
  for (int i = 0; i < 5; i++) {
    int x, y, z, w, points;
    std::cin >> x >> y >> z >> w;
    points = x + y + z + w;
    if (points > max) {
      index = i;
      max = points;
    }
  }
  std::cout << index + 1 << " " << max << std::endl;
}
