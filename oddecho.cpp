#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N;

  std::cin >> N;

  for (int i = 0; i < N; i++) {
    std::string word;
    std::cin >> word;
    if (i % 2 == 0) {
      std::cout << word << std::endl;
    }
  }
}
