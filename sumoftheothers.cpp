#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::string line;
  while (std::getline(std::cin, line)) {
    std::istringstream iss(line);
    std::vector<short> integers;
    short i, sum = 0;
    while (iss >> i) {
      integers.push_back(i);
      sum += i;
    }
    for (short j : integers) {
        if (j == sum - j) {
            std::cout << j << std::endl;
            break;
        }
    }
  }
}
