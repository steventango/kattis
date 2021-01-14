#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  std::unordered_map<short, std::vector<std::vector<short>>> pieces;
  pieces[1].push_back({0});
  pieces[1].push_back({0, 0, 0, 0});
  pieces[2].push_back({0, 0});
  pieces[3].push_back({0, 0, 1});
  pieces[3].push_back({1, 0});
  pieces[4].push_back({1, 0, 0});
  pieces[4].push_back({0, 1});
  pieces[5].push_back({0, 0, 0});
  pieces[5].push_back({0, 1});
  pieces[5].push_back({1, 0, 1});
  pieces[5].push_back({1, 0});
  pieces[6].push_back({0, 0, 0});
  pieces[6].push_back({0, 0});
  pieces[6].push_back({0, 1, 1});
  pieces[6].push_back({2, 0});
  pieces[7].push_back({0, 0, 0});
  pieces[7].push_back({0, 2});
  pieces[7].push_back({1, 1, 0});
  pieces[7].push_back({0, 0});

  short C, P;
  std::vector<short> columns;
  std::cin >> C >> P;

  while (C--) {
    short Ci;
    std::cin >> Ci;
    columns.push_back(Ci);
  }

  short count = 0;
  for (auto rotation : pieces[P]) {
    for (short i = 0; i < columns.size() - rotation.size() + 1; i++) {
      bool b = true;
      for (short j = 0; j < rotation.size(); j++) {
        if (rotation[j] + columns[i] - rotation[0] != columns[i + j]) {
          b = false;
          break;
        };
      }
      if (b) count++;
    }
  }
  std::cout << count << std::endl;
}
