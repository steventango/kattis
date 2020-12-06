#include <iostream>
#include <unordered_set>

int main() {
  int N = 0;
  std::unordered_set<std::string> set;
  std::string word;

  while (std::cin >> word) {
    set.insert(word);
    N++;
  }

  std::cout << (set.size() == N ? "yes" : "no") << std::endl;
}
