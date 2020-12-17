#include <iostream>
#include <unordered_set>

int main() {
  int N;
  std::unordered_set<std::string> won;
  std::cin >> N;
  while (N-- && won.size() < 12) {
    std::string university, team;
    std::cin >> university >> team;
    if (!won.count(university)) {
      std::cout << university << " " << team << std::endl;
      won.insert(university);
    }
  }
}
