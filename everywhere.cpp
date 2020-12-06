#include <iostream>
#include <unordered_set>

int main() {
  int T;
  std::cin >> T;
  while (T--) {
    int n;
    std::unordered_set<std::string> visited;
    std::cin >> n;
    while (n--) {
      std::string city;
      std::cin >> city;
      visited.insert(city);
    }
    std::cout << visited.size() << std::endl;
  }
}
