#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string Y, P;
  std::cin >> Y >> P;

  std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

  if (Y.back() == 'e') {
    std::cout << Y + "x" + P << std::endl;
  } else if (vowels.count(Y.back())) {
    Y.pop_back();
    std::cout << Y + "ex" + P << std::endl;
  } else if (Y.substr(Y.size()-2) == "ex") {
    std::cout << Y + P << std::endl;
  } else {
    std::cout << Y + "ex" + P << std::endl;
  }
}
