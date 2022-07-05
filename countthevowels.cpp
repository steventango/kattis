#include <cctype>
#include <iostream>
#include <unordered_set>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  int count = 0;
  char c;

  while (std::cin >> c) {
    if (vowels.find(std::tolower(c)) != vowels.end()) {
      ++count;
    }
  }

  std::cout << count << std::endl;
}