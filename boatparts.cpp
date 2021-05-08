#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::ios_base::sync_with_stdio(false);

  int P, N;

  std::cin >> P >> N;

  std::unordered_set<std::string> replaced;

  for (int i = 0; i < N; ++i) {
    std::string w;
    std::cin >> w;
    replaced.insert(w);
    if (replaced.size() == P) {
      std::cout << i + 1 << std::endl;
      return 0;
    }
  }

  std::cout << "paradox avoided" << std::endl;
}
