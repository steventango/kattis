#include <iostream>

int main() {
  int N;
  std::cin >> N;
  std::cin.ignore();
  while (N > 0) {
    std::string line;
    std::getline(std::cin, line);
    if (line.substr(0, 10) == "Simon says") {
      std::cout << line.substr(10) << std::endl;
    }
    N--;
  }
}
