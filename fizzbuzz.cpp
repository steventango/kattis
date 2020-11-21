#include <iostream>

int main() {
  int X, Y, N;
  std::cin >> X >> Y >> N;
  for (int i = 1; i < N + 1; i++) {
    bool fizz = i % X == 0, buzz = i % Y == 0;
    if (fizz) {
      std::cout << "Fizz";
    }
    if (buzz) {
      std::cout << "Buzz";
    }
    if (!fizz && !buzz) {
      std::cout << i;
    }
    std::cout << std::endl;
  }
}
