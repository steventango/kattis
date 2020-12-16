#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  std::unordered_map<int, std::vector<int>> outcomes;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    outcomes[a].push_back(i);
  }

  for (int i = 6; i > -1; i--) {
    if (outcomes[i].size() == 1) {
      std::cout << outcomes[i][0] + 1 << std::endl;
      return 0;
    }
  }
  std::cout << "none" << std::endl;
}
