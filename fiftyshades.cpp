#include <algorithm>
#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  int N, n = 0;
  std::cin >> N;

  std::string name;
  std::string pink = "pink";
  std::string rose = "rose";
  while(N--) {
    std::cin >> name;
    if (std::search(
      name.begin(), name.end(),
      pink.begin(), pink.end(),
      [](unsigned char c1, unsigned char c2) { return std::tolower(c1) == c2; }
    ) != name.end() || std::search(
      name.begin(), name.end(),
      rose.begin(), rose.end(),
      [](unsigned char c1, unsigned char c2) { return std::tolower(c1) == c2; }
    ) != name.end()) {
      n++;
    }
  }
  if (n == 0) {
    std::cout << "I must watch Star Wars with my daughter" << std::endl;
  } else {
    std::cout << n << std::endl;
  }
}
