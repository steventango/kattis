#include <iostream>
#include <sstream>
#include <unordered_map>

int main() {
  std::unordered_map<char, std::string> t9 = {
      {'a', "2"},    {'b', "22"},  {'c', "222"}, {'d', "3"},    {'e', "33"},
      {'f', "333"},  {'g', "4"},   {'h', "44"},  {'i', "444"},  {'j', "5"},
      {'k', "55"},   {'l', "555"}, {'m', "6"},   {'n', "66"},   {'o', "666"},
      {'p', "7"},    {'q', "77"},  {'r', "777"}, {'s', "7777"}, {'t', "8"},
      {'u', "88"},   {'v', "888"}, {'w', "9"},   {'x', "99"},   {'y', "999"},
      {'z', "9999"}, {' ', "0"}};

  int N;
  std::cin >> N;
  std::cin.ignore();

  for (int i = 1; i < N + 1; i++) {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    iss >> std::noskipws;

    std::cout << "Case #" << i << ": ";
    char c, last;

    while (iss >> c) {
      if (last == t9[c][0]) std::cout << " ";
      std::cout << t9[c];
      last = t9[c][0];
    }
    std::cout << std::endl;
  }
}
