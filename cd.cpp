#include <iostream>
#include <unordered_set>

int main() {
  int N, M;
  while (std::cin >> N >> M) {
    if (N + M == 0) break;

    int CD, both = 0;
    std::unordered_set<int> jack;

    while (N--) {
      std::cin >> CD;
      jack.insert(CD);
    }

    while (M--) {
      std::cin >> CD;
      if (jack.count(CD)) {
        both++;
      }
    }
    std::cout << both << std::endl;
  }
}
