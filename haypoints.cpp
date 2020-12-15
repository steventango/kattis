#include <iostream>
#include <unordered_map>

int main() {
  int m, n;
  std::cin >> m >> n;

  std::unordered_map<std::string, int> dictionary;

  while (m--) {
    std::string key;
    int value;
    std::cin >> key >> value;
    dictionary[key] = value;
  }

  while (n--) {
    int salary = 0;
    std::string word;
    while (std::cin >> word) {
      if (word == ".") {
        std::cout << salary << std::endl;
        break;
      }
      salary += dictionary[word];
    }
  }
}
