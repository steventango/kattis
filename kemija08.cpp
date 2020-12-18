#include <iostream>
#include <unordered_set>

int main() {
  std::string s;
  std::getline(std::cin, s);
  std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  for (int i = 0; i < s.size(); i++) {
    if (vowels.count(s[i])) i += 2;
    std::cout << s[i];
  }
  std::cout << std::endl;
}
