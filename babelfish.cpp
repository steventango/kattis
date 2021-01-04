#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, std::string> dict;

  std::string line;
  while (std::getline(std::cin, line) && line != "") {
    std::string english, foreign;
    int delimeter = line.find(' ');
    english = line.substr(0, delimeter);
    foreign = line.substr(delimeter + 1);
    dict[foreign] = english;
  }

  std::string word;
  while (std::cin >> word) {
    std::cout << (dict.count(word) ? dict[word] : "eh") << std::endl;
  }
}
