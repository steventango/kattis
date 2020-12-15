#include <algorithm>
#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<char, int> counts = {{'T', 0}, {'C', 0}, {'G', 0}};
  char c;

  while (std::cin >> c) {
    counts[c]++;
  }

  std::cout << counts['T'] * counts['T'] + counts['C'] * counts['C'] +
                   counts['G'] * counts['G'] +
                   7 * std::min({counts['T'], counts['C'], counts['G']})
            << std::endl;
}
