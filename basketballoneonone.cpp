#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  char player;
  int point, A = 0, B = 0;

  while(std::cin >> player >> point) {
    if (player == 'A') {
      A += point;
    } else {
      B += point;
    }
    if (A >= 11 && A - B >= 2) {
      std::cout << "A" << std::endl;
      break;
    } else if (B >= 11 && B - A >= 2) {
      std::cout << "B" << std::endl;
      break;
    }
  }
}
