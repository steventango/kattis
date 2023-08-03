#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  std::string S, ids;
  std::getline(std::cin, S);
  std::cin >> ids;
  for (int i = 0; i < ids.size(); i += 3) {
    int id = atoi(ids.substr(i, 3).c_str());
    std::cout << S[id - 1];
  }
  std::cout << std::endl;
}
