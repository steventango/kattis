#include <iostream>

int main() {
  int N;
  std::cin >> N;
  while (N--) {
    std::string C;
    std::cin >> C;
    std::cout << C.size() << std::endl;
  }
}
