#include <cmath>
#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  
  while (n--) {
    std::string input;
    std::cin >> input;
    int side = std::sqrt(input.size());

    std::vector<std::vector<char>> encoded(side, std::vector<char>());

    for (int i = 0; i < input.size(); i++) {
      encoded[i % side].push_back(input[i]);
    }

    for (int i = encoded.size() - 1; i > -1; i--) {
      for (char c : encoded[i]) {
        std::cout << c;
      }
    }
    std::cout << std::endl;
  }
}
