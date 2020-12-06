#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<char, std::string> dictionary = {
      {'a', "@"},       {'b', "8"},      {'c', "("},      {'d', "|)"},
      {'e', "3"},       {'f', "#"},      {'g', "6"},      {'h', "[-]"},
      {'i', "|"},       {'j', "_|"},     {'k', "|<"},     {'l', "1"},
      {'m', "[]\\/[]"}, {'n', "[]\\[]"}, {'o', "0"},      {'p', "|D"},
      {'q', "(,)"},     {'r', "|Z"},     {'s', "$"},      {'t', "']['"},
      {'u', "|_|"},     {'v', "\\/"},    {'w', "\\/\\/"}, {'x', "}{"},
      {'y', "`/"},      {'z', "2"},
  };

  std::string text;
  std::getline(std::cin, text);

  for (char c : text) {
    std::string translated = dictionary[std::tolower(c)];
    if (translated != "") {
      std::cout << translated;
    } else {
      std::cout << c;
    }
  }
  std::cout << std::endl;
}
