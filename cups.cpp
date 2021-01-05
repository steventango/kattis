#include <cctype>
#include <functional>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

int main() {
  int N;
  std::cin >> N;

  std::priority_queue<std::pair<int, std::string>,
                      std::vector<std::pair<int, std::string>>,
                      std::greater<std::pair<int, std::string>>>
      cups;

  while (N--) {
    int radius;
    std::string color;

    std::cin.ignore();
    if (std::isalpha(std::cin.peek())) {
      std::cin >> color;
      std::cin >> radius;
      radius *= 2;
    } else {
      std::cin >> radius;
      std::cin >> color;
    }

    std::pair<int, std::string> cup(radius, color);
    cups.push(cup);
  }

  while (!cups.empty()) {
    std::cout << cups.top().second << std::endl;
    cups.pop();
  }
}
