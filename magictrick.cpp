#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string str;
  std::cin >> str;

  std::unordered_set<char> set(str.begin(), str.end());

  std::cout << (str.size() == set.size()) << std::endl;
}
