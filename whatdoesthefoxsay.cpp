#include <iostream>
#include <iterator>
#include <sstream>
#include <unordered_set>
#include <vector>

int main() {
  int T;
  std::cin >> T;
  std::cin.ignore();

  while (T--) {
    std::unordered_set<std::string> known;
    std::string line;

    std::getline(std::cin, line);
    std::istringstream iss(line);
    std::vector<std::string> recorded{std::istream_iterator<std::string>{iss},
                                      std::istream_iterator<std::string>{}};

    while (std::getline(std::cin, line) && line != "what does the fox say?") {
      std::string animal, goes, sound;
      std::istringstream iss(line);
      iss >> animal >> goes >> sound;
      known.insert(sound);
    }

    for (std::string sound : recorded) {
      if (!known.count(sound)) std::cout << sound << " ";
    }

    std::cout << std::endl;
  }
}
