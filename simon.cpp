#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  int T;
  std::string line;

  std::cin >> T;
  std::cin.ignore();
  while(T--) {
    std::getline(std::cin, line);
    if (line.rfind("simon says ") == 0) {
      std::cout << line.substr(11) << std::endl;
    } else {
      std::cout << std::endl;
    }
  }
}
