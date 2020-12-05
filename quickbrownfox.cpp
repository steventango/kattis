#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

int main() {
  std::set<char> abc = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                        'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                        's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int N;
  std::cin >> N;
  std::cin.ignore();

  while (N--) {
    std::string line;
    std::set<char> set, diff;
    std::getline(std::cin, line);
    for (char c : line) {
      set.insert(std::tolower(c));
    }

    std::set_difference(abc.begin(), abc.end(), set.begin(), set.end(),
                        std::inserter(diff, diff.end()));

    if (diff.size()) {
      std::cout << "missing ";
      for (char c : diff) {
        std::cout << c;
      }
      std::cout << std::endl;
    } else {
      std::cout << "pangram" << std::endl;
    }
  }
}
